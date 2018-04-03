/********************************************************************************
** Form generated from reading UI file 'blockbrowser.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BLOCKBROWSER_H
#define UI_BLOCKBROWSER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BlockBrowser
{
public:
    QGridLayout *gridLayout;
    QWidget *widget_be;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_5;
    QSpacerItem *horizontalSpacer_2;
    QWidget *layoutWidget_2;
    QGridLayout *gridLayout_3;
    QSpacerItem *verticalSpacer;
    QPushButton *txButton;
    QLabel *inputLabel;
    QLabel *pawBox;
    QLabel *valueLabel;
    QLabel *txLabel;
    QLabel *hardBox;
    QLabel *txID;
    QLabel *inputBox;
    QLabel *valueBox;
    QLabel *hardLabel;
    QSpinBox *heightBox;
    QLabel *heightLabel_2;
    QLabel *timeBox;
    QPushButton *blockButton;
    QLabel *merkleLabel;
    QLabel *hashLabel;
    QLabel *feesBox;
    QLabel *pawLabel;
    QLabel *heightLabel;
    QLabel *feesLabel;
    QLabel *bitsLabel;
    QLabel *bitsBox;
    QLabel *merkleBox;
    QLabel *outputLabel;
    QLabel *outputBox;
    QLabel *nonceLabel;
    QLabel *nonceBox;
    QLabel *timeLabel;
    QLabel *hashBox;
    QLineEdit *txBox;
    QSpacerItem *verticalSpacer_2;
    QFrame *gridFrame_2;
    QGridLayout *gridLayout_4;
    QFormLayout *formLayout_3;
    QLabel *label_17;
    QLabel *heightBox_3;
    QLabel *label_18;
    QLabel *rewardBox_2;
    QLabel *label_19;
    QLabel *diffBox_2;
    QLabel *label_20;
    QLabel *diffBox2_2;
    QLabel *label_21;
    QLabel *pawrateBox_2;
    QLabel *label3_3;
    QLabel *localBox_2;
    QLabel *label1_3;
    QLabel *connectionBox_2;
    QLabel *label_22;
    QLabel *volumeBox_2;
    QLabel *label_23;
    QLabel *minBox_2;
    QLabel *label_24;
    QLabel *maxBox_2;
    QLabel *label_25;
    QLabel *cBox_2;
    QSpacerItem *verticalSpacer_3;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_6;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *startButton;

    void setupUi(QWidget *BlockBrowser)
    {
        if (BlockBrowser->objectName().isEmpty())
            BlockBrowser->setObjectName(QStringLiteral("BlockBrowser"));
        BlockBrowser->setWindowModality(Qt::NonModal);
        BlockBrowser->setEnabled(true);
        BlockBrowser->resize(852, 495);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(BlockBrowser->sizePolicy().hasHeightForWidth());
        BlockBrowser->setSizePolicy(sizePolicy);
        BlockBrowser->setMinimumSize(QSize(0, 0));
        BlockBrowser->setAcceptDrops(false);
        gridLayout = new QGridLayout(BlockBrowser);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setSizeConstraint(QLayout::SetMaximumSize);
        gridLayout->setContentsMargins(21, 21, 10, -1);
        widget_be = new QWidget(BlockBrowser);
        widget_be->setObjectName(QStringLiteral("widget_be"));
        layoutWidget = new QWidget(widget_be);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, 0, 501, 27));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget);
        horizontalLayout_4->setSpacing(7);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        QFont font;
        font.setFamily(QStringLiteral("Open Sans,sans-serif"));
        label_5->setFont(font);

        horizontalLayout_4->addWidget(label_5);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);

        layoutWidget_2 = new QWidget(widget_be);
        layoutWidget_2->setObjectName(QStringLiteral("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(0, 50, 501, 400));
        gridLayout_3 = new QGridLayout(layoutWidget_2);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setSizeConstraint(QLayout::SetDefaultConstraint);
        gridLayout_3->setHorizontalSpacing(7);
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer, 18, 0, 1, 1);

        txButton = new QPushButton(layoutWidget_2);
        txButton->setObjectName(QStringLiteral("txButton"));

        gridLayout_3->addWidget(txButton, 12, 1, 1, 1);

        inputLabel = new QLabel(layoutWidget_2);
        inputLabel->setObjectName(QStringLiteral("inputLabel"));
        inputLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        gridLayout_3->addWidget(inputLabel, 17, 0, 1, 1);

        pawBox = new QLabel(layoutWidget_2);
        pawBox->setObjectName(QStringLiteral("pawBox"));

        gridLayout_3->addWidget(pawBox, 10, 1, 1, 1);

        valueLabel = new QLabel(layoutWidget_2);
        valueLabel->setObjectName(QStringLiteral("valueLabel"));

        gridLayout_3->addWidget(valueLabel, 14, 0, 1, 1);

        txLabel = new QLabel(layoutWidget_2);
        txLabel->setObjectName(QStringLiteral("txLabel"));

        gridLayout_3->addWidget(txLabel, 13, 0, 1, 1);

        hardBox = new QLabel(layoutWidget_2);
        hardBox->setObjectName(QStringLiteral("hardBox"));

        gridLayout_3->addWidget(hardBox, 9, 1, 1, 1);

        txID = new QLabel(layoutWidget_2);
        txID->setObjectName(QStringLiteral("txID"));

        gridLayout_3->addWidget(txID, 13, 1, 1, 1);

        inputBox = new QLabel(layoutWidget_2);
        inputBox->setObjectName(QStringLiteral("inputBox"));
        inputBox->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        gridLayout_3->addWidget(inputBox, 17, 1, 1, 1);

        valueBox = new QLabel(layoutWidget_2);
        valueBox->setObjectName(QStringLiteral("valueBox"));

        gridLayout_3->addWidget(valueBox, 14, 1, 1, 1);

        hardLabel = new QLabel(layoutWidget_2);
        hardLabel->setObjectName(QStringLiteral("hardLabel"));

        gridLayout_3->addWidget(hardLabel, 9, 0, 1, 1);

        heightBox = new QSpinBox(layoutWidget_2);
        heightBox->setObjectName(QStringLiteral("heightBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(heightBox->sizePolicy().hasHeightForWidth());
        heightBox->setSizePolicy(sizePolicy1);
        heightBox->setMaximum(99999999);

        gridLayout_3->addWidget(heightBox, 1, 0, 1, 1);

        heightLabel_2 = new QLabel(layoutWidget_2);
        heightLabel_2->setObjectName(QStringLiteral("heightLabel_2"));

        gridLayout_3->addWidget(heightLabel_2, 3, 0, 1, 1);

        timeBox = new QLabel(layoutWidget_2);
        timeBox->setObjectName(QStringLiteral("timeBox"));

        gridLayout_3->addWidget(timeBox, 8, 1, 1, 1);

        blockButton = new QPushButton(layoutWidget_2);
        blockButton->setObjectName(QStringLiteral("blockButton"));

        gridLayout_3->addWidget(blockButton, 1, 1, 1, 1);

        merkleLabel = new QLabel(layoutWidget_2);
        merkleLabel->setObjectName(QStringLiteral("merkleLabel"));

        gridLayout_3->addWidget(merkleLabel, 5, 0, 1, 1);

        hashLabel = new QLabel(layoutWidget_2);
        hashLabel->setObjectName(QStringLiteral("hashLabel"));

        gridLayout_3->addWidget(hashLabel, 4, 0, 1, 1);

        feesBox = new QLabel(layoutWidget_2);
        feesBox->setObjectName(QStringLiteral("feesBox"));

        gridLayout_3->addWidget(feesBox, 15, 1, 1, 1);

        pawLabel = new QLabel(layoutWidget_2);
        pawLabel->setObjectName(QStringLiteral("pawLabel"));

        gridLayout_3->addWidget(pawLabel, 10, 0, 1, 1);

        heightLabel = new QLabel(layoutWidget_2);
        heightLabel->setObjectName(QStringLiteral("heightLabel"));

        gridLayout_3->addWidget(heightLabel, 3, 1, 1, 1);

        feesLabel = new QLabel(layoutWidget_2);
        feesLabel->setObjectName(QStringLiteral("feesLabel"));

        gridLayout_3->addWidget(feesLabel, 15, 0, 1, 1);

        bitsLabel = new QLabel(layoutWidget_2);
        bitsLabel->setObjectName(QStringLiteral("bitsLabel"));

        gridLayout_3->addWidget(bitsLabel, 7, 0, 1, 1);

        bitsBox = new QLabel(layoutWidget_2);
        bitsBox->setObjectName(QStringLiteral("bitsBox"));

        gridLayout_3->addWidget(bitsBox, 7, 1, 1, 1);

        merkleBox = new QLabel(layoutWidget_2);
        merkleBox->setObjectName(QStringLiteral("merkleBox"));
        merkleBox->setMinimumSize(QSize(187, 0));

        gridLayout_3->addWidget(merkleBox, 5, 1, 1, 1);

        outputLabel = new QLabel(layoutWidget_2);
        outputLabel->setObjectName(QStringLiteral("outputLabel"));
        outputLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        gridLayout_3->addWidget(outputLabel, 16, 0, 1, 1);

        outputBox = new QLabel(layoutWidget_2);
        outputBox->setObjectName(QStringLiteral("outputBox"));
        outputBox->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        gridLayout_3->addWidget(outputBox, 16, 1, 1, 1);

        nonceLabel = new QLabel(layoutWidget_2);
        nonceLabel->setObjectName(QStringLiteral("nonceLabel"));

        gridLayout_3->addWidget(nonceLabel, 6, 0, 1, 1);

        nonceBox = new QLabel(layoutWidget_2);
        nonceBox->setObjectName(QStringLiteral("nonceBox"));

        gridLayout_3->addWidget(nonceBox, 6, 1, 1, 1);

        timeLabel = new QLabel(layoutWidget_2);
        timeLabel->setObjectName(QStringLiteral("timeLabel"));

        gridLayout_3->addWidget(timeLabel, 8, 0, 1, 1);

        hashBox = new QLabel(layoutWidget_2);
        hashBox->setObjectName(QStringLiteral("hashBox"));
        hashBox->setEnabled(true);
        sizePolicy.setHeightForWidth(hashBox->sizePolicy().hasHeightForWidth());
        hashBox->setSizePolicy(sizePolicy);
        hashBox->setMinimumSize(QSize(0, 0));

        gridLayout_3->addWidget(hashBox, 4, 1, 1, 1);

        txBox = new QLineEdit(layoutWidget_2);
        txBox->setObjectName(QStringLiteral("txBox"));
        sizePolicy1.setHeightForWidth(txBox->sizePolicy().hasHeightForWidth());
        txBox->setSizePolicy(sizePolicy1);

        gridLayout_3->addWidget(txBox, 12, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer_2, 11, 0, 1, 1);

        gridFrame_2 = new QFrame(widget_be);
        gridFrame_2->setObjectName(QStringLiteral("gridFrame_2"));
        gridFrame_2->setGeometry(QRect(500, 40, 580, 351));
        gridLayout_4 = new QGridLayout(gridFrame_2);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        formLayout_3 = new QFormLayout();
        formLayout_3->setObjectName(QStringLiteral("formLayout_3"));
        formLayout_3->setSizeConstraint(QLayout::SetMinimumSize);
        formLayout_3->setFieldGrowthPolicy(QFormLayout::FieldsStayAtSizeHint);
        formLayout_3->setLabelAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        formLayout_3->setFormAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);
        formLayout_3->setHorizontalSpacing(50);
        formLayout_3->setVerticalSpacing(15);
        formLayout_3->setContentsMargins(-1, 0, 0, -1);
        label_17 = new QLabel(gridFrame_2);
        label_17->setObjectName(QStringLiteral("label_17"));

        formLayout_3->setWidget(1, QFormLayout::LabelRole, label_17);

        heightBox_3 = new QLabel(gridFrame_2);
        heightBox_3->setObjectName(QStringLiteral("heightBox_3"));

        formLayout_3->setWidget(1, QFormLayout::FieldRole, heightBox_3);

        label_18 = new QLabel(gridFrame_2);
        label_18->setObjectName(QStringLiteral("label_18"));

        formLayout_3->setWidget(2, QFormLayout::LabelRole, label_18);

        rewardBox_2 = new QLabel(gridFrame_2);
        rewardBox_2->setObjectName(QStringLiteral("rewardBox_2"));

        formLayout_3->setWidget(2, QFormLayout::FieldRole, rewardBox_2);

        label_19 = new QLabel(gridFrame_2);
        label_19->setObjectName(QStringLiteral("label_19"));

        formLayout_3->setWidget(3, QFormLayout::LabelRole, label_19);

        diffBox_2 = new QLabel(gridFrame_2);
        diffBox_2->setObjectName(QStringLiteral("diffBox_2"));

        formLayout_3->setWidget(3, QFormLayout::FieldRole, diffBox_2);

        label_20 = new QLabel(gridFrame_2);
        label_20->setObjectName(QStringLiteral("label_20"));

        formLayout_3->setWidget(4, QFormLayout::LabelRole, label_20);

        diffBox2_2 = new QLabel(gridFrame_2);
        diffBox2_2->setObjectName(QStringLiteral("diffBox2_2"));

        formLayout_3->setWidget(4, QFormLayout::FieldRole, diffBox2_2);

        label_21 = new QLabel(gridFrame_2);
        label_21->setObjectName(QStringLiteral("label_21"));

        formLayout_3->setWidget(5, QFormLayout::LabelRole, label_21);

        pawrateBox_2 = new QLabel(gridFrame_2);
        pawrateBox_2->setObjectName(QStringLiteral("pawrateBox_2"));

        formLayout_3->setWidget(5, QFormLayout::FieldRole, pawrateBox_2);

        label3_3 = new QLabel(gridFrame_2);
        label3_3->setObjectName(QStringLiteral("label3_3"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label3_3->sizePolicy().hasHeightForWidth());
        label3_3->setSizePolicy(sizePolicy2);

        formLayout_3->setWidget(6, QFormLayout::LabelRole, label3_3);

        localBox_2 = new QLabel(gridFrame_2);
        localBox_2->setObjectName(QStringLiteral("localBox_2"));

        formLayout_3->setWidget(6, QFormLayout::FieldRole, localBox_2);

        label1_3 = new QLabel(gridFrame_2);
        label1_3->setObjectName(QStringLiteral("label1_3"));
        label1_3->setEnabled(true);
        QFont font1;
        font1.setPointSize(12);
        font1.setKerning(true);
        label1_3->setFont(font1);

        formLayout_3->setWidget(7, QFormLayout::LabelRole, label1_3);

        connectionBox_2 = new QLabel(gridFrame_2);
        connectionBox_2->setObjectName(QStringLiteral("connectionBox_2"));

        formLayout_3->setWidget(7, QFormLayout::FieldRole, connectionBox_2);

        label_22 = new QLabel(gridFrame_2);
        label_22->setObjectName(QStringLiteral("label_22"));

        formLayout_3->setWidget(8, QFormLayout::LabelRole, label_22);

        volumeBox_2 = new QLabel(gridFrame_2);
        volumeBox_2->setObjectName(QStringLiteral("volumeBox_2"));

        formLayout_3->setWidget(8, QFormLayout::FieldRole, volumeBox_2);

        label_23 = new QLabel(gridFrame_2);
        label_23->setObjectName(QStringLiteral("label_23"));

        formLayout_3->setWidget(9, QFormLayout::LabelRole, label_23);

        minBox_2 = new QLabel(gridFrame_2);
        minBox_2->setObjectName(QStringLiteral("minBox_2"));

        formLayout_3->setWidget(9, QFormLayout::FieldRole, minBox_2);

        label_24 = new QLabel(gridFrame_2);
        label_24->setObjectName(QStringLiteral("label_24"));

        formLayout_3->setWidget(10, QFormLayout::LabelRole, label_24);

        maxBox_2 = new QLabel(gridFrame_2);
        maxBox_2->setObjectName(QStringLiteral("maxBox_2"));

        formLayout_3->setWidget(10, QFormLayout::FieldRole, maxBox_2);

        label_25 = new QLabel(gridFrame_2);
        label_25->setObjectName(QStringLiteral("label_25"));

        formLayout_3->setWidget(11, QFormLayout::LabelRole, label_25);

        cBox_2 = new QLabel(gridFrame_2);
        cBox_2->setObjectName(QStringLiteral("cBox_2"));

        formLayout_3->setWidget(11, QFormLayout::FieldRole, cBox_2);


        gridLayout_4->addLayout(formLayout_3, 2, 0, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_4->addItem(verticalSpacer_3, 1, 0, 1, 1);

        layoutWidget1 = new QWidget(widget_be);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(505, 0, 321, 26));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_5->setSpacing(7);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(layoutWidget1);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setFont(font);

        horizontalLayout_5->addWidget(label_6);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_3);

        startButton = new QPushButton(widget_be);
        startButton->setObjectName(QStringLiteral("startButton"));
        startButton->setGeometry(QRect(510, 400, 141, 31));
        QFont font2;
        font2.setBold(true);
        font2.setWeight(75);
        startButton->setFont(font2);
        startButton->setStyleSheet(QStringLiteral("background:lightgrey;"));

        gridLayout->addWidget(widget_be, 1, 0, 1, 1);


        retranslateUi(BlockBrowser);

        QMetaObject::connectSlotsByName(BlockBrowser);
    } // setupUi

    void retranslateUi(QWidget *BlockBrowser)
    {
        BlockBrowser->setWindowTitle(QApplication::translate("BlockBrowser", "Form", 0));
        label_5->setText(QApplication::translate("BlockBrowser", "<html><head/><body><p><span style=\" font-size:20px; font-weight:600; color:#000000;\">SONO Block Explorer </span></p></body></html>", 0));
        txButton->setText(QApplication::translate("BlockBrowser", "Decode Transaction", 0));
        inputLabel->setText(QApplication::translate("BlockBrowser", "Inputs:", 0));
        pawBox->setText(QApplication::translate("BlockBrowser", "0000 KH/s", 0));
        valueLabel->setText(QApplication::translate("BlockBrowser", "Value out:", 0));
        txLabel->setText(QApplication::translate("BlockBrowser", "Transaction ID:", 0));
        hardBox->setText(QApplication::translate("BlockBrowser", "0.00", 0));
        txID->setText(QApplication::translate("BlockBrowser", "000", 0));
        inputBox->setText(QString());
        valueBox->setText(QString());
        hardLabel->setText(QApplication::translate("BlockBrowser", "Block Difficulty:", 0));
        heightLabel_2->setText(QApplication::translate("BlockBrowser", "Block Height:", 0));
        timeBox->setText(QApplication::translate("BlockBrowser", "0", 0));
        blockButton->setText(QApplication::translate("BlockBrowser", "Jump to Block", 0));
        merkleLabel->setText(QApplication::translate("BlockBrowser", "Block Merkle:", 0));
        hashLabel->setText(QApplication::translate("BlockBrowser", "Block Hash:", 0));
        feesBox->setText(QString());
        pawLabel->setText(QApplication::translate("BlockBrowser", "Block Hashrate:", 0));
        heightLabel->setText(QApplication::translate("BlockBrowser", "0", 0));
        feesLabel->setText(QApplication::translate("BlockBrowser", "Fees:", 0));
        bitsLabel->setText(QApplication::translate("BlockBrowser", "Block nBits:", 0));
        bitsBox->setText(QApplication::translate("BlockBrowser", "0", 0));
        merkleBox->setText(QApplication::translate("BlockBrowser", "0x0", 0));
        outputLabel->setText(QApplication::translate("BlockBrowser", "Outputs:", 0));
        outputBox->setText(QString());
        nonceLabel->setText(QApplication::translate("BlockBrowser", "Block nNonce:", 0));
        nonceBox->setText(QApplication::translate("BlockBrowser", "0", 0));
        timeLabel->setText(QApplication::translate("BlockBrowser", "Block Timestamp:", 0));
        hashBox->setText(QApplication::translate("BlockBrowser", "0x0", 0));
        txBox->setInputMask(QString());
        txBox->setPlaceholderText(QString());
        label_17->setText(QApplication::translate("BlockBrowser", "<html><head/><body><p><span style=\" font-weight:600;\">Block Height</span></p></body></html>", 0));
        heightBox_3->setText(QApplication::translate("BlockBrowser", "00000", 0));
        label_18->setText(QApplication::translate("BlockBrowser", "<html><head/><body><p><span style=\" font-weight:600;\">POW Block Reward</span></p></body></html>", 0));
        rewardBox_2->setText(QApplication::translate("BlockBrowser", "00000", 0));
        label_19->setText(QApplication::translate("BlockBrowser", "<html><head/><body><p><span style=\" font-weight:600;\">POW difficulty</span></p></body></html>", 0));
        diffBox_2->setText(QApplication::translate("BlockBrowser", "0.0002", 0));
        label_20->setText(QApplication::translate("BlockBrowser", "<html><head/><body><p><span style=\" font-weight:600;\">POS difficulty</span></p></body></html>", 0));
        diffBox2_2->setText(QApplication::translate("BlockBrowser", "0.0002", 0));
        label_21->setText(QApplication::translate("BlockBrowser", "<html><head/><body><p><span style=\" font-weight:600;\">Net Hashrate</span></p></body></html>", 0));
        pawrateBox_2->setText(QApplication::translate("BlockBrowser", "0 MH/s", 0));
        label3_3->setText(QApplication::translate("BlockBrowser", "<html><head/><body><p><span style=\" font-weight:600;\">Last block time</span></p></body></html>", 0));
        localBox_2->setText(QApplication::translate("BlockBrowser", "0 KH/s", 0));
        label1_3->setText(QApplication::translate("BlockBrowser", "<html><head/><body><p><span style=\" font-weight:600;\">Connections</span></p></body></html>", 0));
        connectionBox_2->setText(QApplication::translate("BlockBrowser", "0", 0));
        label_22->setText(QApplication::translate("BlockBrowser", "<html><head/><body><p><span style=\" font-weight:600;\">Total Volume</span></p></body></html>", 0));
        volumeBox_2->setText(QApplication::translate("BlockBrowser", "000", 0));
        label_23->setText(QApplication::translate("BlockBrowser", "<html><head/><body><p><span style=\" font-weight:600;\">Total stake weight</span></p></body></html>", 0));
        minBox_2->setText(QApplication::translate("BlockBrowser", "0", 0));
        label_24->setText(QApplication::translate("BlockBrowser", "<html><head/><body><p><span style=\" font-weight:600;\">Network stake weight</span></p></body></html>", 0));
        maxBox_2->setText(QApplication::translate("BlockBrowser", "0", 0));
        label_25->setText(QApplication::translate("BlockBrowser", "<html><head/><body><p><span style=\" font-weight:600;\">Mining Phase</span></p></body></html>", 0));
        cBox_2->setText(QApplication::translate("BlockBrowser", "Press Update", 0));
        label_6->setText(QApplication::translate("BlockBrowser", "<html><head/><body><p><span style=\" font-size:20px; font-weight:600; color:#000000;\">SONO Network Statistics</span></p></body></html>", 0));
        startButton->setText(QApplication::translate("BlockBrowser", "Update Statistics", 0));
    } // retranslateUi

};

namespace Ui {
    class BlockBrowser: public Ui_BlockBrowser {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BLOCKBROWSER_H
