/********************************************************************************
** Form generated from reading UI file 'sidetoolbar.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIDETOOLBAR_H
#define UI_SIDETOOLBAR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_sidetoolbar
{
public:

    void setupUi(QWidget *sidetoolbar)
    {
        if (sidetoolbar->objectName().isEmpty())
            sidetoolbar->setObjectName(QStringLiteral("sidetoolbar"));
        sidetoolbar->resize(100, 415);
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(sidetoolbar->sizePolicy().hasHeightForWidth());
        sidetoolbar->setSizePolicy(sizePolicy);
        sidetoolbar->setMaximumSize(QSize(16777215, 415));

        retranslateUi(sidetoolbar);

        QMetaObject::connectSlotsByName(sidetoolbar);
    } // setupUi

    void retranslateUi(QWidget *sidetoolbar)
    {
        sidetoolbar->setWindowTitle(QApplication::translate("sidetoolbar", "Form", 0));
    } // retranslateUi

};

namespace Ui {
    class sidetoolbar: public Ui_sidetoolbar {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIDETOOLBAR_H
