/********************************************************************************
** Form generated from reading UI file 'addproduct.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDPRODUCT_H
#define UI_ADDPRODUCT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_addproduct
{
public:
    QPushButton *goback;
    QLineEdit *lineEdit_2;
    QComboBox *comboBox;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QSpinBox *mBox;
    QSpinBox *pBox;
    QPushButton *pushButton;

    void setupUi(QDialog *addproduct)
    {
        if (addproduct->objectName().isEmpty())
            addproduct->setObjectName(QString::fromUtf8("addproduct"));
        addproduct->resize(400, 300);
        goback = new QPushButton(addproduct);
        goback->setObjectName(QString::fromUtf8("goback"));
        goback->setGeometry(QRect(20, 260, 93, 28));
        lineEdit_2 = new QLineEdit(addproduct);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(210, 30, 171, 31));
        comboBox = new QComboBox(addproduct);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(210, 190, 171, 31));
        label = new QLabel(addproduct);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(100, 30, 71, 21));
        label_2 = new QLabel(addproduct);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(100, 90, 55, 16));
        label_3 = new QLabel(addproduct);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(110, 136, 81, 20));
        label_4 = new QLabel(addproduct);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(50, 190, 141, 21));
        mBox = new QSpinBox(addproduct);
        mBox->setObjectName(QString::fromUtf8("mBox"));
        mBox->setGeometry(QRect(210, 80, 171, 31));
        mBox->setMaximum(100000);
        mBox->setSingleStep(10);
        mBox->setValue(500);
        pBox = new QSpinBox(addproduct);
        pBox->setObjectName(QString::fromUtf8("pBox"));
        pBox->setGeometry(QRect(210, 130, 171, 31));
        pBox->setMinimum(30);
        pBox->setMaximum(10000);
        pBox->setValue(100);
        pushButton = new QPushButton(addproduct);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(250, 260, 93, 28));

        retranslateUi(addproduct);

        QMetaObject::connectSlotsByName(addproduct);
    } // setupUi

    void retranslateUi(QDialog *addproduct)
    {
        addproduct->setWindowTitle(QCoreApplication::translate("addproduct", "Dialog", nullptr));
        goback->setText(QCoreApplication::translate("addproduct", "\320\236\321\202\320\274\320\265\320\275\320\260", nullptr));
        label->setText(QCoreApplication::translate("addproduct", "\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265", nullptr));
        label_2->setText(QCoreApplication::translate("addproduct", "\320\234\320\260\321\201\321\201\320\260(\320\263)", nullptr));
        label_3->setText(QCoreApplication::translate("addproduct", "\320\246\320\265\320\275\320\260 \321\200.\321\210\321\202", nullptr));
        label_4->setText(QCoreApplication::translate("addproduct", "\320\222\321\213\320\261\320\265\321\200\320\270\321\202\320\265 \320\277\320\276\321\201\321\202\320\260\320\262\321\211\320\270\320\272\320\260", nullptr));
        pushButton->setText(QCoreApplication::translate("addproduct", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class addproduct: public Ui_addproduct {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDPRODUCT_H
