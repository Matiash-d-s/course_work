/********************************************************************************
** Form generated from reading UI file 'addcompany.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDCOMPANY_H
#define UI_ADDCOMPANY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_addcompany
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLineEdit *forma;
    QLineEdit *name;
    QLineEdit *phone;
    QLineEdit *mail;
    QLineEdit *sait;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;

    void setupUi(QDialog *addcompany)
    {
        if (addcompany->objectName().isEmpty())
            addcompany->setObjectName(QString::fromUtf8("addcompany"));
        addcompany->resize(491, 339);
        pushButton = new QPushButton(addcompany);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(20, 270, 93, 28));
        pushButton_2 = new QPushButton(addcompany);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(370, 270, 93, 28));
        forma = new QLineEdit(addcompany);
        forma->setObjectName(QString::fromUtf8("forma"));
        forma->setGeometry(QRect(230, 10, 231, 22));
        name = new QLineEdit(addcompany);
        name->setObjectName(QString::fromUtf8("name"));
        name->setGeometry(QRect(230, 50, 231, 22));
        phone = new QLineEdit(addcompany);
        phone->setObjectName(QString::fromUtf8("phone"));
        phone->setGeometry(QRect(230, 90, 231, 22));
        mail = new QLineEdit(addcompany);
        mail->setObjectName(QString::fromUtf8("mail"));
        mail->setGeometry(QRect(230, 130, 231, 22));
        sait = new QLineEdit(addcompany);
        sait->setObjectName(QString::fromUtf8("sait"));
        sait->setGeometry(QRect(230, 170, 231, 22));
        label = new QLabel(addcompany);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(130, 10, 55, 16));
        label_2 = new QLabel(addcompany);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(130, 50, 61, 16));
        label_3 = new QLabel(addcompany);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(60, 90, 141, 20));
        label_4 = new QLabel(addcompany);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(130, 130, 55, 16));
        label_5 = new QLabel(addcompany);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(130, 180, 55, 16));

        retranslateUi(addcompany);

        QMetaObject::connectSlotsByName(addcompany);
    } // setupUi

    void retranslateUi(QDialog *addcompany)
    {
        addcompany->setWindowTitle(QCoreApplication::translate("addcompany", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("addcompany", "\320\235\320\260\320\267\320\260\320\264", nullptr));
        pushButton_2->setText(QCoreApplication::translate("addcompany", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
        label->setText(QCoreApplication::translate("addcompany", "\320\244\320\276\321\200\320\274\320\260", nullptr));
        label_2->setText(QCoreApplication::translate("addcompany", "\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265", nullptr));
        label_3->setText(QCoreApplication::translate("addcompany", "\320\232\320\276\320\275\321\202\320\260\320\272\321\202\320\275\321\213\320\271 \321\202\320\265\320\273\320\265\321\204\320\276\320\275", nullptr));
        label_4->setText(QCoreApplication::translate("addcompany", "E-mail", nullptr));
        label_5->setText(QCoreApplication::translate("addcompany", "\320\241\320\260\320\271\321\202", nullptr));
    } // retranslateUi

};

namespace Ui {
    class addcompany: public Ui_addcompany {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDCOMPANY_H
