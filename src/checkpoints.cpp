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
            (  1000,     uint256("0x43897b66f9fce27d400d6a90ce57d3f6bf8e05ac0f970eec3aeb7aa9db4ce71f") )
            (  2000,     uint256("0x825b0ab760d54f351c166feb83011379cc87cb9f7ea2f780e767fff0bb8fbf92") )
            (  5000,     uint256("0x72c75a83ece934dc22ba08a6b0e25f37a400d13c8856c21431b0be8bf7d22f31") )
            ( 10000,     uint256("0x771e841b1e86729193c14d9bd25eaf9c53ed22a8676d0594a05d90adaee2f52e") )
            ( 25000,     uint256("0xac4c189c34021582003ff38534bc1bd13590bc7b5d550f19078c217941e86261") )
            ( 35000,     uint256("0xad6e983fd49ead6303ae8052d1f1eb3bda5f486d7d3e5b30237db42f86677420") )
            ( 45000,     uint256("0xf301c4fe84c7a50665365816c9c609c6a31a571dc141edc5fc023fbd3174848b") )
            ( 50000,     uint256("0x152921539825e79d237bcb80a69048937dfe10a1ce902c4d390823318630bdaf") )
            ( 60000,     uint256("0xb2848b4c2f26152e300be4d56af9b3624fa73c6985acaae6adaf544706d31de6") )
            ( 75000,     uint256("0x86bd94044445d68e86ccd421265fb8be3bed70507e04237e4116718db6e27437") )
            (100000,     uint256("0x73004f988252f1ee9336c4a04d83a5f0d221d5f7033274fec283eecb75ac81e9") )
            (125000,     uint256("0x3d09fcbefac92879ecb904206f932cbccd1741defc5132529cfbeb65256d4d40") )
            (150000,     uint256("0x4985cf127e052b2bb0346c619ab6dbd8274dbe837537a9fdee92e877f9715807") )
            (175000,     uint256("0x9f031e1c11ee3c8f7589b82ef49a2819d8f518061fa0d0df41a769fd70dfeccc") )
            (190000,     uint256("0xb6803f0d76c43a65eafd928769bec63193a0a8a69d6726f6ef39284b656e7100") )
            (192000,     uint256("0x85d994b4fefbd1c07a48a7d67233c053093c99fcdc0a905e6fdd61069ab2e6a4") )
            (192500,     uint256("0x5abbb3865f7ebde9375fff23538796e8fd27f6854bdeb934ffd18582e6ecfe41") )
            (193000,     uint256("0x7249a6b6b43c5e37896d671125d1b4675f4626bc9a2b29f5b3e22ab07f6e7c95") )
            (193500,     uint256("0xaebf3a45502af59647b6e3ad5e582b6a09239f41cd732dfc2ea33d635f261652") )
            (194000,     uint256("0xf82a62095f49a49923286c48c9a5566582eb99c1cd8ffe003639677c5d6cfd6b") )
            (196000,     uint256("0x5079b35197d2c5ea448826475f58236072b7f71cbb23f39f49c31a7ea8bce4df") )
            (200000,     uint256("0x4dbe5400e6ce489b9841000ae1a88096b1b9bcbbc7013385ccb976ec13e4e2cd") )
            (240000,     uint256("0xbb6bc6c1851c0607347a5b8e3c3aef75bda86da606cd5815052dba8a08a46cac") )



            

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
