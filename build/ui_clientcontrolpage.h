/********************************************************************************
** Form generated from reading UI file 'clientcontrolpage.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLIENTCONTROLPAGE_H
#define UI_CLIENTCONTROLPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ClientControlPage
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QGroupBox *Upd8Control;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox;
    QWidget *verticalLayoutWidget_5;
    QVBoxLayout *verticalLayout_6;
    QCheckBox *checkBoxupd8;
    QPushButton *AU_apply;
    QPlainTextEdit *dDIR;
    QLabel *label_5;
    QGroupBox *groupBox_2;
    QWidget *verticalLayoutWidget_4;
    QVBoxLayout *verticalLayout_5;
    QPushButton *chck4_upd8;
    QPushButton *dwngrd_opt;
    QGroupBox *groupBox_3;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QPlainTextEdit *instVER;
    QPlainTextEdit *liveVER;
    QLabel *label;
    QLabel *label_2;
    QSpacerItem *verticalSpacer_3;
    QGroupBox *ClieControl;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_3;
    QGroupBox *groupBox_4;
    QWidget *verticalLayoutWidget_8;
    QVBoxLayout *verticalLayout_9;
    QHBoxLayout *horizontalLayout_3;
    QRadioButton *minCLIE;
    QRadioButton *plusCLIE;
    QRadioButton *liteCLIE;
    QSpacerItem *verticalSpacer_2;
    QPushButton *CS_submit;
    QLabel *label_6;
    QHBoxLayout *horizontalLayout_4;
    QLabel *cliePREV;
    QGroupBox *TestControl;
    QWidget *verticalLayoutWidget_3;
    QVBoxLayout *verticalLayout_4;
    QGroupBox *groupBox_5;
    QWidget *verticalLayoutWidget_7;
    QVBoxLayout *verticalLayout_8;
    QLabel *label_4;
    QCheckBox *optin_test;
    QPlainTextEdit *plainTextEdit_2;
    QSpacerItem *verticalSpacer;
    QGroupBox *groupBox_6;
    QWidget *verticalLayoutWidget_6;
    QVBoxLayout *verticalLayout_7;
    QLabel *label_3;
    QPlainTextEdit *br_input;
    QPushButton *BR_submit;

    void setupUi(QWidget *ClientControlPage)
    {
        if (ClientControlPage->objectName().isEmpty())
            ClientControlPage->setObjectName(QStringLiteral("ClientControlPage"));
        ClientControlPage->resize(822, 344);
        verticalLayout = new QVBoxLayout(ClientControlPage);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        Upd8Control = new QGroupBox(ClientControlPage);
        Upd8Control->setObjectName(QStringLiteral("Upd8Control"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        Upd8Control->setFont(font);
        verticalLayoutWidget = new QWidget(Upd8Control);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(9, 19, 251, 301));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        groupBox = new QGroupBox(verticalLayoutWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setMinimumSize(QSize(0, 120));
        groupBox->setMaximumSize(QSize(16777215, 110));
        QFont font1;
        font1.setBold(false);
        font1.setWeight(50);
        groupBox->setFont(font1);
        verticalLayoutWidget_5 = new QWidget(groupBox);
        verticalLayoutWidget_5->setObjectName(QStringLiteral("verticalLayoutWidget_5"));
        verticalLayoutWidget_5->setGeometry(QRect(7, 19, 231, 51));
        verticalLayout_6 = new QVBoxLayout(verticalLayoutWidget_5);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        checkBoxupd8 = new QCheckBox(verticalLayoutWidget_5);
        checkBoxupd8->setObjectName(QStringLiteral("checkBoxupd8"));
        checkBoxupd8->setChecked(false);

        verticalLayout_6->addWidget(checkBoxupd8);

        AU_apply = new QPushButton(verticalLayoutWidget_5);
        AU_apply->setObjectName(QStringLiteral("AU_apply"));

        verticalLayout_6->addWidget(AU_apply);

        dDIR = new QPlainTextEdit(groupBox);
        dDIR->setObjectName(QStringLiteral("dDIR"));
        dDIR->setGeometry(QRect(80, 80, 161, 31));
        dDIR->setReadOnly(true);
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(10, 84, 71, 20));

        verticalLayout_2->addWidget(groupBox);

        groupBox_2 = new QGroupBox(verticalLayoutWidget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setMinimumSize(QSize(0, 150));
        groupBox_2->setFont(font1);
        verticalLayoutWidget_4 = new QWidget(groupBox_2);
        verticalLayoutWidget_4->setObjectName(QStringLiteral("verticalLayoutWidget_4"));
        verticalLayoutWidget_4->setGeometry(QRect(9, 19, 231, 151));
        verticalLayout_5 = new QVBoxLayout(verticalLayoutWidget_4);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        chck4_upd8 = new QPushButton(verticalLayoutWidget_4);
        chck4_upd8->setObjectName(QStringLiteral("chck4_upd8"));

        verticalLayout_5->addWidget(chck4_upd8);

        dwngrd_opt = new QPushButton(verticalLayoutWidget_4);
        dwngrd_opt->setObjectName(QStringLiteral("dwngrd_opt"));

        verticalLayout_5->addWidget(dwngrd_opt);

        groupBox_3 = new QGroupBox(verticalLayoutWidget_4);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setMinimumSize(QSize(0, 85));
        horizontalLayoutWidget_2 = new QWidget(groupBox_3);
        horizontalLayoutWidget_2->setObjectName(QStringLiteral("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(10, 40, 211, 31));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        instVER = new QPlainTextEdit(horizontalLayoutWidget_2);
        instVER->setObjectName(QStringLiteral("instVER"));
        instVER->setEnabled(false);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(instVER->sizePolicy().hasHeightForWidth());
        instVER->setSizePolicy(sizePolicy);
        instVER->setMaximumSize(QSize(91, 25));

        horizontalLayout_2->addWidget(instVER);

        liveVER = new QPlainTextEdit(horizontalLayoutWidget_2);
        liveVER->setObjectName(QStringLiteral("liveVER"));
        liveVER->setEnabled(false);
        sizePolicy.setHeightForWidth(liveVER->sizePolicy().hasHeightForWidth());
        liveVER->setSizePolicy(sizePolicy);
        liveVER->setMaximumSize(QSize(91, 25));

        horizontalLayout_2->addWidget(liveVER);

        label = new QLabel(groupBox_3);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(40, 20, 61, 21));
        label_2 = new QLabel(groupBox_3);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(150, 20, 61, 20));

        verticalLayout_5->addWidget(groupBox_3);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_3);


        verticalLayout_2->addWidget(groupBox_2);


        horizontalLayout->addWidget(Upd8Control);

        ClieControl = new QGroupBox(ClientControlPage);
        ClieControl->setObjectName(QStringLiteral("ClieControl"));
        ClieControl->setFont(font);
        verticalLayoutWidget_2 = new QWidget(ClieControl);
        verticalLayoutWidget_2->setObjectName(QStringLiteral("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(9, 19, 251, 301));
        verticalLayout_3 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        groupBox_4 = new QGroupBox(verticalLayoutWidget_2);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        groupBox_4->setFont(font1);
        verticalLayoutWidget_8 = new QWidget(groupBox_4);
        verticalLayoutWidget_8->setObjectName(QStringLiteral("verticalLayoutWidget_8"));
        verticalLayoutWidget_8->setGeometry(QRect(9, 19, 231, 271));
        verticalLayout_9 = new QVBoxLayout(verticalLayoutWidget_8);
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        verticalLayout_9->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        minCLIE = new QRadioButton(verticalLayoutWidget_8);
        minCLIE->setObjectName(QStringLiteral("minCLIE"));

        horizontalLayout_3->addWidget(minCLIE);

        plusCLIE = new QRadioButton(verticalLayoutWidget_8);
        plusCLIE->setObjectName(QStringLiteral("plusCLIE"));
        plusCLIE->setEnabled(false);

        horizontalLayout_3->addWidget(plusCLIE);

        liteCLIE = new QRadioButton(verticalLayoutWidget_8);
        liteCLIE->setObjectName(QStringLiteral("liteCLIE"));
        liteCLIE->setEnabled(false);

        horizontalLayout_3->addWidget(liteCLIE);


        verticalLayout_9->addLayout(horizontalLayout_3);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_9->addItem(verticalSpacer_2);

        CS_submit = new QPushButton(verticalLayoutWidget_8);
        CS_submit->setObjectName(QStringLiteral("CS_submit"));

        verticalLayout_9->addWidget(CS_submit);

        label_6 = new QLabel(verticalLayoutWidget_8);
        label_6->setObjectName(QStringLiteral("label_6"));

        verticalLayout_9->addWidget(label_6);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        cliePREV = new QLabel(verticalLayoutWidget_8);
        cliePREV->setObjectName(QStringLiteral("cliePREV"));
        cliePREV->setMinimumSize(QSize(0, 144));

        horizontalLayout_4->addWidget(cliePREV);


        verticalLayout_9->addLayout(horizontalLayout_4);


        verticalLayout_3->addWidget(groupBox_4);


        horizontalLayout->addWidget(ClieControl);

        TestControl = new QGroupBox(ClientControlPage);
        TestControl->setObjectName(QStringLiteral("TestControl"));
        TestControl->setFont(font);
        verticalLayoutWidget_3 = new QWidget(TestControl);
        verticalLayoutWidget_3->setObjectName(QStringLiteral("verticalLayoutWidget_3"));
        verticalLayoutWidget_3->setGeometry(QRect(9, 19, 251, 301));
        verticalLayout_4 = new QVBoxLayout(verticalLayoutWidget_3);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        groupBox_5 = new QGroupBox(verticalLayoutWidget_3);
        groupBox_5->setObjectName(QStringLiteral("groupBox_5"));
        groupBox_5->setFont(font1);
        verticalLayoutWidget_7 = new QWidget(groupBox_5);
        verticalLayoutWidget_7->setObjectName(QStringLiteral("verticalLayoutWidget_7"));
        verticalLayoutWidget_7->setGeometry(QRect(10, 20, 231, 121));
        verticalLayout_8 = new QVBoxLayout(verticalLayoutWidget_7);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        verticalLayout_8->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(verticalLayoutWidget_7);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setStyleSheet(QStringLiteral("color: rgb(255, 0, 0);"));

        verticalLayout_8->addWidget(label_4);

        optin_test = new QCheckBox(verticalLayoutWidget_7);
        optin_test->setObjectName(QStringLiteral("optin_test"));
        optin_test->setEnabled(false);

        verticalLayout_8->addWidget(optin_test);

        plainTextEdit_2 = new QPlainTextEdit(verticalLayoutWidget_7);
        plainTextEdit_2->setObjectName(QStringLiteral("plainTextEdit_2"));
        plainTextEdit_2->setEnabled(false);
        plainTextEdit_2->setMaximumSize(QSize(16777215, 75));
        plainTextEdit_2->setReadOnly(false);

        verticalLayout_8->addWidget(plainTextEdit_2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_8->addItem(verticalSpacer);


        verticalLayout_4->addWidget(groupBox_5);

        groupBox_6 = new QGroupBox(verticalLayoutWidget_3);
        groupBox_6->setObjectName(QStringLiteral("groupBox_6"));
        groupBox_6->setFont(font1);
        verticalLayoutWidget_6 = new QWidget(groupBox_6);
        verticalLayoutWidget_6->setObjectName(QStringLiteral("verticalLayoutWidget_6"));
        verticalLayoutWidget_6->setGeometry(QRect(10, 20, 231, 115));
        verticalLayout_7 = new QVBoxLayout(verticalLayoutWidget_6);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(verticalLayoutWidget_6);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout_7->addWidget(label_3);

        br_input = new QPlainTextEdit(verticalLayoutWidget_6);
        br_input->setObjectName(QStringLiteral("br_input"));
        br_input->setEnabled(false);
        br_input->setMinimumSize(QSize(0, 65));
        br_input->setMaximumSize(QSize(16777215, 65));

        verticalLayout_7->addWidget(br_input);

        BR_submit = new QPushButton(verticalLayoutWidget_6);
        BR_submit->setObjectName(QStringLiteral("BR_submit"));
        BR_submit->setEnabled(true);

        verticalLayout_7->addWidget(BR_submit);


        verticalLayout_4->addWidget(groupBox_6);


        horizontalLayout->addWidget(TestControl);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(ClientControlPage);

        QMetaObject::connectSlotsByName(ClientControlPage);
    } // setupUi

    void retranslateUi(QWidget *ClientControlPage)
    {
        ClientControlPage->setWindowTitle(QApplication::translate("ClientControlPage", "Address Book", 0));
        Upd8Control->setTitle(QApplication::translate("ClientControlPage", "Update Settings", 0));
        groupBox->setTitle(QApplication::translate("ClientControlPage", "Auto Update", 0));
        checkBoxupd8->setText(QApplication::translate("ClientControlPage", "Check for Updates on Startup", 0));
        AU_apply->setText(QApplication::translate("ClientControlPage", "Apply", 0));
        label_5->setText(QApplication::translate("ClientControlPage", "Data", 0));
        groupBox_2->setTitle(QApplication::translate("ClientControlPage", "Manual Update", 0));
        chck4_upd8->setText(QApplication::translate("ClientControlPage", "Check for Update", 0));
        dwngrd_opt->setText(QApplication::translate("ClientControlPage", "Downgrade Current Client", 0));
        groupBox_3->setTitle(QApplication::translate("ClientControlPage", "Version", 0));
        label->setText(QApplication::translate("ClientControlPage", "Installed", 0));
        label_2->setText(QApplication::translate("ClientControlPage", "Latest", 0));
        ClieControl->setTitle(QApplication::translate("ClientControlPage", "Interface Options", 0));
        groupBox_4->setTitle(QApplication::translate("ClientControlPage", "select", 0));
        minCLIE->setText(QApplication::translate("ClientControlPage", "Minimal", 0));
        plusCLIE->setText(QApplication::translate("ClientControlPage", "Plus", 0));
        liteCLIE->setText(QApplication::translate("ClientControlPage", "Lite", 0));
        CS_submit->setText(QApplication::translate("ClientControlPage", "Submit", 0));
        label_6->setText(QApplication::translate("ClientControlPage", "Preview", 0));
        cliePREV->setText(QString());
        TestControl->setTitle(QApplication::translate("ClientControlPage", "Testing/Bug", 0));
        groupBox_5->setTitle(QApplication::translate("ClientControlPage", "Pre-Release Test ", 0));
        label_4->setText(QApplication::translate("ClientControlPage", "(For Developer)", 0));
        optin_test->setText(QApplication::translate("ClientControlPage", "Pre-Release and Test versions", 0));
        plainTextEdit_2->setPlainText(QApplication::translate("ClientControlPage", "Update preRelease/Test version available", 0));
        groupBox_6->setTitle(QApplication::translate("ClientControlPage", "Bug-Reporting", 0));
        label_3->setText(QApplication::translate("ClientControlPage", "Input Issues", 0));
        br_input->setPlainText(QApplication::translate("ClientControlPage", "Please send your error to contact@SONO.tech", 0));
        BR_submit->setText(QApplication::translate("ClientControlPage", "Submit", 0));
    } // retranslateUi

};

namespace Ui {
    class ClientControlPage: public Ui_ClientControlPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLIENTCONTROLPAGE_H
