// Copyright (c) 2009-2012 The Bitcoin developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#include <boost/assign/list_of.hpp> // for 'map_list_of()'
#include <boost/foreach.hpp>

#include "checkpoints.h"

#include "txdb.h"
#include "main.h"
#include "uint256.h"


static const int nCheckpointSpan = 500;

namespace Checkpoints
{
    typedef std::map<int, uint256> MapCheckpoints;

    //
    // What makes a good checkpoint block?
    // + Is surrounded by blocks with reasonable timestamps
    //   (no blocks before with a timestamp after, none after with
    //    timestamp before)
    // + Contains no strange transactions
    // Initilised anti exploit protection for checkpoint | Auto checkpoint-back initilised

    static MapCheckpoints mapCheckpoints =
        boost::assign::map_list_of
            (     0,     uint256("0x00000f14896ba98013ed07e0ecf6e29b360a20898aab5c23238fd08c17ac1b10") )
            ( 10000,     uint256("0x771e841b1e86729193c14d9bd25eaf9c53ed22a8676d0594a05d90adaee2f52e") )
            ( 50000,     uint256("0x152921539825e79d237bcb80a69048937dfe10a1ce902c4d390823318630bdaf") )
            ( 75000,     uint256("0x86bd94044445d68e86ccd421265fb8be3bed70507e04237e4116718db6e27437") )
            (100000,     uint256("0x73004f988252f1ee9336c4a04d83a5f0d221d5f7033274fec283eecb75ac81e9") )
            (150000,     uint256("0x4985cf127e052b2bb0346c619ab6dbd8274dbe837537a9fdee92e877f9715807") )
            (175000,     uint256("0x9f031e1c11ee3c8f7589b82ef49a2819d8f518061fa0d0df41a769fd70dfeccc") )
            (200000,     uint256("0x4dbe5400e6ce489b9841000ae1a88096b1b9bcbbc7013385ccb976ec13e4e2cd") )
            (225000,     uint256("0xabe7bdad25fea3674ec77247ba9e0841105238cd5eafa315b18425d551666ee5") )
            (250000,     uint256("0xa4cf32e008ee6c64a8d3d07132f94e385c595042462bd7d92e7f6f5b26dc2216") )
            (268000,     uint256("0x3db9f981b75f1512b5684079dd77345930aadbf282d4e36d86112cb2cb7a5e41") )   //MN Hardfork

    ;


    // TestNet has no checkpoints
    static MapCheckpoints mapCheckpointsTestnet;

    bool CheckHardened(int nHeight, const uint256& hash)
    {
        MapCheckpoints& checkpoints = (TestNet() ? mapCheckpointsTestnet : mapCheckpoints);

        MapCheckpoints::const_iterator i = checkpoints.find(nHeight);
        if (i == checkpoints.end()) return true;
        return hash == i->second;
    }

    int GetTotalBlocksEstimate()
    {
        MapCheckpoints& checkpoints = (TestNet() ? mapCheckpointsTestnet : mapCheckpoints);

        if (checkpoints.empty())
            return 0;
        return checkpoints.rbegin()->first;
    }

    CBlockIndex* GetLastCheckpoint(const std::map<uint256, CBlockIndex*>& mapBlockIndex)
    {
        MapCheckpoints& checkpoints = (TestNet() ? mapCheckpointsTestnet : mapCheckpoints);

        BOOST_REVERSE_FOREACH(const MapCheckpoints::value_type& i, checkpoints)
        {
            const uint256& hash = i.second;
            std::map<uint256, CBlockIndex*>::const_iterator t = mapBlockIndex.find(hash);
            if (t != mapBlockIndex.end())
                return t->second;
        }
        return NULL;
    }

    // Automatically select a suitable sync-checkpoint
    const CBlockIndex* AutoSelectSyncCheckpoint()
    {
        const CBlockIndex *pindex = pindexBest;
        // Search backward for a block within max span and maturity window
        while (pindex->pprev && pindex->nHeight + nCheckpointSpan > pindexBest->nHeight)
            pindex = pindex->pprev;
        return pindex;
    }

    // Check against synchronized checkpoint
    bool CheckSync(int nHeight)
    {
        const CBlockIndex* pindexSync = AutoSelectSyncCheckpoint();

        if (nHeight <= pindexSync->nHeight)
            return false;
        return true;
    }
}
