/********************************************************************************
** Form generated from reading ui file 'linboGUI_v1.ui'
**
** Created: Mon Jul 13 10:29:11 2009
**      by: Qt User Interface Compiler version 4.5.2
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_LINBOGUI_V1_H
#define UI_LINBOGUI_V1_H

#include <Qt3Support/Q3ButtonGroup>
#include <Qt3Support/Q3TextBrowser>
#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QTabWidget>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_linboGUI
{
public:
    QLabel *pixmapLabel1;
    QLabel *textLabel1_3;
    Q3TextBrowser *textBrowser2;
    QLabel *textLabel1;
    QLineEdit *lineEdit1;
    QTabWidget *tabWidget2;
    QWidget *tab;
    Q3ButtonGroup *buttonGroup2;
    QLabel *textLabel1_2;
    QPushButton *pushButton3;
    QPushButton *pushButton2;
    QPushButton *pushButton1;
    QWidget *tab1;
    Q3ButtonGroup *buttonGroup2_2;

    void setupUi(QDialog *linboGUI)
    {
        if (linboGUI->objectName().isEmpty())
            linboGUI->setObjectName(QString::fromUtf8("linboGUI"));
        linboGUI->resize(640, 480);
        QSizePolicy sizePolicy(static_cast<QSizePolicy::Policy>(0), static_cast<QSizePolicy::Policy>(0));
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(linboGUI->sizePolicy().hasHeightForWidth());
        linboGUI->setSizePolicy(sizePolicy);
        linboGUI->setMaximumSize(QSize(640, 480));
        pixmapLabel1 = new QLabel(linboGUI);
        pixmapLabel1->setObjectName(QString::fromUtf8("pixmapLabel1"));
        pixmapLabel1->setGeometry(QRect(480, 10, 130, 40));
        pixmapLabel1->setPixmap(qt_get_icon(image0_ID));
        pixmapLabel1->setScaledContents(true);
        pixmapLabel1->setWordWrap(false);
        textLabel1_3 = new QLabel(linboGUI);
        textLabel1_3->setObjectName(QString::fromUtf8("textLabel1_3"));
        textLabel1_3->setGeometry(QRect(250, 320, 101, 31));
        textLabel1_3->setWordWrap(false);
        textBrowser2 = new Q3TextBrowser(linboGUI);
        textBrowser2->setObjectName(QString::fromUtf8("textBrowser2"));
        textBrowser2->setGeometry(QRect(20, 370, 600, 90));
        textLabel1 = new QLabel(linboGUI);
        textLabel1->setObjectName(QString::fromUtf8("textLabel1"));
        textLabel1->setGeometry(QRect(20, 330, 141, 21));
        textLabel1->setWordWrap(false);
        lineEdit1 = new QLineEdit(linboGUI);
        lineEdit1->setObjectName(QString::fromUtf8("lineEdit1"));
        lineEdit1->setGeometry(QRect(370, 320, 151, 31));
        tabWidget2 = new QTabWidget(linboGUI);
        tabWidget2->setObjectName(QString::fromUtf8("tabWidget2"));
        tabWidget2->setGeometry(QRect(108, 69, 441, 231));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        buttonGroup2 = new Q3ButtonGroup(tab);
        buttonGroup2->setObjectName(QString::fromUtf8("buttonGroup2"));
        buttonGroup2->setGeometry(QRect(10, 0, 421, 191));
        textLabel1_2 = new QLabel(buttonGroup2);
        textLabel1_2->setObjectName(QString::fromUtf8("textLabel1_2"));
        textLabel1_2->setGeometry(QRect(10, 20, 111, 21));
        textLabel1_2->setWordWrap(false);
        pushButton3 = new QPushButton(buttonGroup2);
        pushButton3->setObjectName(QString::fromUtf8("pushButton3"));
        pushButton3->setGeometry(QRect(240, 60, 110, 30));
        pushButton2 = new QPushButton(buttonGroup2);
        pushButton2->setObjectName(QString::fromUtf8("pushButton2"));
        pushButton2->setGeometry(QRect(12, 61, 100, 30));
        pushButton1 = new QPushButton(buttonGroup2);
        pushButton1->setObjectName(QString::fromUtf8("pushButton1"));
        pushButton1->setGeometry(QRect(120, 60, 110, 31));
        tabWidget2->addTab(tab, QString());
        tab1 = new QWidget();
        tab1->setObjectName(QString::fromUtf8("tab1"));
        buttonGroup2_2 = new Q3ButtonGroup(tab1);
        buttonGroup2_2->setObjectName(QString::fromUtf8("buttonGroup2_2"));
        buttonGroup2_2->setGeometry(QRect(10, 6, 411, 181));
        tabWidget2->addTab(tab1, QString());

        retranslateUi(linboGUI);

        QMetaObject::connectSlotsByName(linboGUI);
    } // setupUi

    void retranslateUi(QDialog *linboGUI)
    {
        linboGUI->setWindowTitle(QApplication::translate("linboGUI", "LINBO", 0, QApplication::UnicodeUTF8));
        textLabel1_3->setText(QApplication::translate("linboGUI", "Enter Password", 0, QApplication::UnicodeUTF8));
        textBrowser2->setText(QApplication::translate("linboGUI", "Welcome to LINBO", 0, QApplication::UnicodeUTF8));
        textLabel1->setText(QApplication::translate("linboGUI", "LINBO Console", 0, QApplication::UnicodeUTF8));
        buttonGroup2->setTitle(QApplication::translate("linboGUI", "buttonGroup2", 0, QApplication::UnicodeUTF8));
        textLabel1_2->setText(QApplication::translate("linboGUI", "Windowz", 0, QApplication::UnicodeUTF8));
        pushButton3->setText(QApplication::translate("linboGUI", "Update", 0, QApplication::UnicodeUTF8));
        pushButton2->setText(QApplication::translate("linboGUI", "Boot", 0, QApplication::UnicodeUTF8));
        pushButton1->setText(QApplication::translate("linboGUI", "Delete", 0, QApplication::UnicodeUTF8));
        tabWidget2->setTabText(tabWidget2->indexOf(tab), QApplication::translate("linboGUI", "Tab 1", 0, QApplication::UnicodeUTF8));
        buttonGroup2_2->setTitle(QApplication::translate("linboGUI", "buttonGroup2", 0, QApplication::UnicodeUTF8));
        tabWidget2->setTabText(tabWidget2->indexOf(tab1), QApplication::translate("linboGUI", "Tab 2", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(linboGUI);
    } // retranslateUi


protected:
    enum IconID
    {
        image0_ID,
        unknown_ID
    };
    static QPixmap qt_get_icon(IconID id)
    {
    static const unsigned char image0_data[] = { 
    0x89, 0x50, 0x4e, 0x47, 0x0d, 0x0a, 0x1a, 0x0a, 0x00, 0x00, 0x00, 0x0d,
    0x49, 0x48, 0x44, 0x52, 0x00, 0x00, 0x00, 0x72, 0x00, 0x00, 0x00, 0x1d,
    0x08, 0x06, 0x00, 0x00, 0x00, 0x76, 0x7f, 0x38, 0xf2, 0x00, 0x00, 0x0f,
    0xf3, 0x49, 0x44, 0x41, 0x54, 0x68, 0x81, 0xed, 0x9a, 0x7f, 0x68, 0x1b,
    0x67, 0x9a, 0xc7, 0x3f, 0x5e, 0x12, 0x18, 0x81, 0x02, 0x23, 0x70, 0x60,
    0xa6, 0xa4, 0x20, 0x41, 0x72, 0xac, 0xd4, 0x04, 0x3c, 0xa6, 0x2d, 0x2b,
    0x93, 0x80, 0x35, 0x61, 0x61, 0xab, 0x5c, 0x8e, 0x44, 0xd9, 0x3b, 0x58,
    0x27, 0x0d, 0x34, 0xee, 0x2e, 0x24, 0x4e, 0x7b, 0x34, 0x72, 0x0e, 0xba,
    0xb1, 0x09, 0x89, 0xd3, 0x5d, 0x8e, 0x58, 0x29, 0xbd, 0x8b, 0x5b, 0x68,
    0x63, 0x87, 0x6e, 0x13, 0x17, 0xb6, 0x71, 0xb2, 0x6c, 0x62, 0x75, 0xe9,
    0xa2, 0x51, 0xa0, 0x8d, 0x5d, 0x5a, 0x6c, 0x05, 0xba, 0xb1, 0xa1, 0x0d,
    0x48, 0x70, 0x25, 0x33, 0x6c, 0x42, 0x35, 0x10, 0x11, 0x0d, 0x8d, 0x61,
    0xee, 0x8f, 0xf1, 0x8c, 0x66, 0x24, 0xd9, 0x4d, 0x8e, 0xdd, 0xeb, 0xfe,
    0xd1, 0x07, 0xcc, 0x6b, 0xbd, 0xcf, 0xf7, 0x7d, 0xde, 0xf7, 0x7d, 0xde,
    0xf7, 0x79, 0xbf, 0xef, 0x8f, 0xe9, 0xb0, 0x6d, 0xdb, 0xa6, 0x49, 0x16,
    0x8a, 0x0b, 0x10, 0x86, 0x58, 0x67, 0x8c, 0x50, 0x2c, 0xe4, 0xe5, 0xcf,
    0x97, 0xe6, 0x11, 0x96, 0x04, 0xa8, 0x41, 0x62, 0x6b, 0x82, 0xb1, 0xb7,
    0xc6, 0x3a, 0x52, 0xc9, 0x94, 0x4d, 0x0d, 0x22, 0x1b, 0x22, 0xc8, 0x9b,
    0xe4, 0x66, 0x53, 0x2c, 0x7c, 0xbe, 0x00, 0x35, 0x88, 0x6d, 0x8e, 0x11,
    0x5a, 0x1f, 0x6a, 0xd1, 0xf3, 0x10, 0xa6, 0xae, 0x4d, 0x61, 0x96, 0x4d,
    0xf4, 0x9a, 0x8e, 0x9a, 0x54, 0xe9, 0x79, 0xba, 0x07, 0x22, 0xad, 0xd0,
    0x7a, 0xb9, 0x4e, 0xf9, 0x5e, 0x19, 0x6a, 0x40, 0x18, 0x8c, 0x9a, 0x41,
    0x72, 0x73, 0xb2, 0xc5, 0xae, 0x8b, 0x33, 0x6a, 0x06, 0x52, 0x58, 0x5a,
    0xb1, 0x7e, 0x7f, 0x7f, 0x5c, 0x7b, 0x2e, 0x3e, 0xb1, 0x35, 0x01, 0x6b,
    0x41, 0xff, 0x4a, 0xa7, 0xfa, 0x75, 0x35, 0xa0, 0x6f, 0xf6, 0xcb, 0x3f,
    0x84, 0xd8, 0x6d, 0x04, 0xb0, 0x01, 0x7b, 0xe4, 0xc4, 0x88, 0x97, 0x37,
    0x37, 0x3f, 0xe7, 0xe5, 0x67, 0x76, 0x65, 0xec, 0xb3, 0x6f, 0x9c, 0xe5,
    0xd2, 0x1b, 0x97, 0x70, 0xf3, 0x00, 0xfb, 0xc1, 0x5f, 0x1f, 0x3c, 0x92,
    0x2d, 0x57, 0x46, 0x4e, 0x8c, 0xd8, 0xa2, 0x28, 0xda, 0x7e, 0x1b, 0xdf,
    0x85, 0x6f, 0x87, 0x55, 0xba, 0x14, 0x7b, 0x6e, 0x7e, 0xce, 0xc3, 0x9d,
    0x3b, 0x71, 0xee, 0x91, 0x70, 0xa9, 0xde, 0x54, 0x5b, 0x1c, 0x60, 0x17,
    0xb4, 0xc2, 0xaa, 0x98, 0x68, 0x34, 0x6a, 0xdf, 0xf9, 0xf2, 0x4e, 0x3b,
    0xf7, 0x7d, 0x2f, 0xb2, 0xea, 0x40, 0x1e, 0x3a, 0x78, 0xc8, 0x6b, 0x6c,
    0xba, 0x2b, 0xed, 0x74, 0x60, 0x63, 0xd4, 0x2e, 0x68, 0x05, 0x27, 0xff,
    0x8e, 0x1d, 0xe8, 0x5c, 0x66, 0x57, 0xc6, 0xb6, 0x1f, 0xb4, 0xb7, 0x35,
    0x72, 0x74, 0xc4, 0xbe, 0x33, 0xbf, 0xdc, 0xf1, 0x6f, 0x1a, 0xf6, 0xdc,
    0xbf, 0x74, 0x57, 0xda, 0x56, 0xba, 0x94, 0x16, 0xc7, 0xdb, 0xdf, 0x36,
    0x6c, 0xad, 0x34, 0x90, 0x80, 0x2d, 0x8a, 0xa2, 0xfd, 0xe0, 0xcb, 0x07,
    0x8f, 0x85, 0x5b, 0x6d, 0x20, 0xaf, 0x5d, 0xbc, 0x66, 0x3f, 0xf8, 0xf2,
    0xc1, 0xaa, 0x18, 0x51, 0x14, 0xed, 0x07, 0x77, 0x5a, 0x27, 0xef, 0xf7,
    0x21, 0x3f, 0x5a, 0x2d, 0x5a, 0x2d, 0xcb, 0x62, 0xf1, 0xeb, 0x45, 0x4e,
    0x9d, 0x3c, 0x45, 0xfe, 0x66, 0x1e, 0x21, 0x2c, 0x30, 0x74, 0x74, 0x08,
    0x29, 0x2c, 0xa1, 0x9b, 0x3a, 0x34, 0xad, 0xa4, 0x97, 0xff, 0x70, 0x99,
    0xb1, 0xf3, 0x63, 0x6d, 0x6d, 0x95, 0xef, 0x95, 0xa9, 0x2e, 0x55, 0x01,
    0x18, 0x1c, 0x19, 0x24, 0x7f, 0x33, 0x0f, 0x40, 0xfa, 0x67, 0x69, 0xe6,
    0xb4, 0x39, 0xb2, 0x67, 0xb2, 0x5c, 0x78, 0xfb, 0x02, 0xd7, 0xfe, 0x78,
    0x8d, 0xf4, 0xcf, 0xd2, 0x00, 0x94, 0x6e, 0x96, 0x18, 0xf8, 0xf7, 0x01,
    0xcf, 0x86, 0xec, 0xab, 0xb0, 0xa0, 0x15, 0x98, 0xd3, 0xe6, 0x38, 0xf4,
    0xd2, 0x21, 0x00, 0x4c, 0xd3, 0xe4, 0xc5, 0xe3, 0x2f, 0x52, 0xbf, 0x5f,
    0x0f, 0xd4, 0xfb, 0x28, 0x38, 0xa5, 0x4b, 0xa1, 0xa0, 0x15, 0xb8, 0xf5,
    0xd9, 0x2d, 0x2f, 0x0d, 0xc9, 0x21, 0x4c, 0xcc, 0x00, 0xc6, 0xd5, 0x07,
    0x6c, 0x65, 0x5f, 0x5c, 0xcd, 0x85, 0xff, 0x6f, 0xb2, 0xe6, 0xbb, 0x00,
    0x75, 0xbd, 0xce, 0xf0, 0xf1, 0x61, 0x00, 0xb2, 0x2f, 0x65, 0x49, 0x2a,
    0x49, 0x42, 0x56, 0x88, 0xc4, 0xb6, 0x44, 0x00, 0x27, 0x49, 0x12, 0x86,
    0x61, 0x90, 0x7f, 0x27, 0xcf, 0xc0, 0xce, 0x01, 0x78, 0x32, 0x68, 0x47,
    0x0e, 0xcb, 0x18, 0x35, 0x83, 0xd8, 0xdd, 0x18, 0xb9, 0xd7, 0x73, 0x00,
    0x24, 0xb7, 0x26, 0x39, 0x7d, 0xf2, 0x34, 0xd4, 0x20, 0xbe, 0x21, 0x8e,
    0x1c, 0x96, 0x49, 0x74, 0x25, 0xd8, 0xf1, 0xf4, 0x0e, 0x06, 0x8f, 0x0f,
    0x92, 0x7b, 0x27, 0xc7, 0x9b, 0x6f, 0xbd, 0x49, 0x7a, 0x67, 0x9a, 0x1d,
    0xcf, 0xed, 0x40, 0x47, 0x6f, 0xd4, 0x17, 0x96, 0xb0, 0xd6, 0x58, 0x8c,
    0x0e, 0x8f, 0x52, 0xfa, 0xbc, 0xc4, 0xec, 0xa7, 0xb3, 0x2c, 0x2e, 0x2e,
    0x62, 0x54, 0x8c, 0x60, 0xbb, 0xc2, 0x12, 0x91, 0x35, 0x91, 0x47, 0xc2,
    0x11, 0x86, 0x64, 0x34, 0xe9, 0x70, 0x6a, 0x34, 0x46, 0x68, 0x29, 0x14,
    0x98, 0x3c, 0x46, 0xcd, 0x40, 0xd9, 0xa8, 0x90, 0x7c, 0x25, 0xe9, 0xd9,
    0x32, 0x17, 0x4d, 0xca, 0xb3, 0x65, 0x62, 0xc9, 0x18, 0x00, 0xfd, 0x3b,
    0xfb, 0x31, 0x30, 0x88, 0xae, 0x8f, 0x32, 0x36, 0x36, 0x06, 0x4d, 0x54,
    0xea, 0xea, 0xb3, 0xbf, 0xca, 0xa2, 0xee, 0x54, 0x01, 0xd8, 0xb1, 0x73,
    0x07, 0x12, 0x12, 0x06, 0x46, 0x4b, 0x7a, 0xe1, 0xbf, 0x2e, 0xb0, 0xef,
    0xe5, 0x7d, 0x2b, 0xea, 0xa7, 0xaf, 0x4e, 0x03, 0xb0, 0x6a, 0x44, 0x9a,
    0xb5, 0xc6, 0x8c, 0x4b, 0xff, 0x73, 0x9a, 0xbe, 0xdd, 0x7d, 0xce, 0x60,
    0xfc, 0x24, 0xd6, 0x82, 0x4d, 0x3f, 0x97, 0x46, 0x92, 0x24, 0xf2, 0x37,
    0xf3, 0x8c, 0xbd, 0x33, 0x06, 0x0f, 0x83, 0x7a, 0xbd, 0xa6, 0x23, 0x85,
    0x25, 0x72, 0x6f, 0xe5, 0xbc, 0xbc, 0x53, 0x07, 0x4f, 0x61, 0xd4, 0x0c,
    0xe4, 0x8d, 0xb2, 0xb3, 0x51, 0x92, 0x81, 0xb5, 0x80, 0x0c, 0xc7, 0xfe,
    0xf3, 0x98, 0x87, 0xbb, 0xfc, 0xc1, 0x65, 0x74, 0x5d, 0x0f, 0xd8, 0x33,
    0x6a, 0x06, 0xf1, 0x0d, 0x71, 0x26, 0xde, 0x9f, 0xe8, 0xd0, 0x8d, 0x86,
    0xae, 0x7c, 0xaf, 0x8c, 0x50, 0x13, 0x02, 0x38, 0x71, 0x83, 0xd8, 0x16,
    0x67, 0xd6, 0xcc, 0x00, 0x2e, 0xb1, 0x31, 0x41, 0x68, 0x7d, 0x88, 0x50,
    0x2c, 0xe4, 0x6c, 0x8c, 0x64, 0x5a, 0x26, 0x0f, 0x61, 0xc8, 0x5f, 0xcd,
    0x77, 0x58, 0x96, 0xe5, 0xf4, 0x0b, 0x9d, 0xfa, 0x9a, 0xba, 0x17, 0xe1,
    0x06, 0xce, 0x04, 0xa9, 0xdc, 0xad, 0x30, 0xfd, 0xfe, 0x34, 0xf5, 0x7a,
    0x70, 0x85, 0x70, 0xf5, 0x65, 0xbd, 0x0c, 0xf7, 0x5b, 0xf3, 0x9b, 0xd3,
    0xc5, 0xaf, 0x17, 0x57, 0xd5, 0xbb, 0x7e, 0x59, 0x35, 0x22, 0xf3, 0x1f,
    0xe6, 0xb1, 0x6a, 0x16, 0xf1, 0x1f, 0xc7, 0x19, 0x39, 0x32, 0x02, 0x35,
    0x48, 0x6e, 0x4e, 0x3a, 0xce, 0x6e, 0x12, 0x39, 0x2c, 0x93, 0x3d, 0x9a,
    0xe5, 0x68, 0xf6, 0x28, 0xa7, 0xde, 0x39, 0xc5, 0x81, 0x83, 0x07, 0x08,
    0xc9, 0xa1, 0x80, 0x9e, 0x1a, 0x68, 0x45, 0x0d, 0x80, 0xe8, 0xc6, 0x28,
    0x92, 0x2c, 0x11, 0xea, 0x0c, 0x11, 0x79, 0xb2, 0x75, 0x8b, 0x1a, 0x89,
    0x44, 0x50, 0xba, 0x14, 0x4a, 0x37, 0x4b, 0x94, 0x4a, 0x25, 0xac, 0x7b,
    0x56, 0x40, 0xaf, 0x5d, 0xd1, 0xc8, 0x5f, 0xcd, 0xa3, 0x15, 0x35, 0xbb,
    0x52, 0xa9, 0x00, 0x90, 0xdc, 0x96, 0x44, 0x0a, 0x4b, 0x18, 0x4b, 0x46,
    0x0b, 0x6e, 0xb1, 0xb8, 0xd8, 0x82, 0x63, 0xc9, 0xc1, 0x2c, 0xde, 0x5e,
    0x24, 0x77, 0x24, 0xc7, 0x50, 0x78, 0x08, 0x61, 0x8d, 0x33, 0x09, 0xdc,
    0x76, 0x7a, 0xed, 0xc7, 0x69, 0x7f, 0x24, 0x1c, 0xc1, 0xc0, 0xb0, 0x4b,
    0x37, 0x4b, 0x00, 0xa4, 0xb7, 0xa5, 0x9d, 0x49, 0x20, 0x38, 0x2b, 0x94,
    0x3f, 0x62, 0x26, 0xfe, 0x34, 0x41, 0x77, 0xb2, 0x9b, 0x50, 0xbc, 0xe1,
    0x07, 0x57, 0x2f, 0x20, 0xa0, 0xdf, 0xd6, 0x91, 0x15, 0xd9, 0xcb, 0x97,
    0x15, 0x99, 0xf4, 0xb6, 0x34, 0x7a, 0x4d, 0x47, 0x0e, 0xcb, 0x4e, 0x2a,
    0xca, 0x64, 0x8f, 0x64, 0x11, 0xd7, 0x88, 0x8c, 0xbd, 0x37, 0x06, 0x3a,
    0x20, 0x43, 0xff, 0xbf, 0xf6, 0xa3, 0xd7, 0x74, 0x67, 0xc7, 0xad, 0x7f,
    0xc7, 0x40, 0x5a, 0x35, 0xc7, 0x79, 0x62, 0xa7, 0x88, 0x89, 0x49, 0x7c,
    0x43, 0xbc, 0xfd, 0x11, 0x02, 0x27, 0xe2, 0xfa, 0xb6, 0xf5, 0x91, 0xef,
    0xcd, 0x53, 0xbc, 0x5e, 0xe4, 0xf0, 0xb1, 0xc3, 0x8c, 0x4f, 0x8c, 0x07,
    0xf4, 0x84, 0x7d, 0x03, 0x15, 0x8e, 0x40, 0x18, 0x04, 0x51, 0x68, 0x63,
    0xcd, 0x11, 0x51, 0x14, 0xbd, 0xff, 0xcb, 0xf7, 0xca, 0x44, 0xac, 0xc6,
    0x80, 0xbf, 0xf6, 0xdf, 0xaf, 0x05, 0xb0, 0xd1, 0x8d, 0x51, 0x06, 0x9e,
    0x1f, 0xc0, 0xa8, 0x19, 0x08, 0x82, 0xf0, 0x58, 0x38, 0xab, 0x66, 0x79,
    0x9c, 0xed, 0x4a, 0xb5, 0x5a, 0x25, 0x12, 0x69, 0xd4, 0x97, 0xbf, 0x99,
    0x27, 0xaf, 0x06, 0x31, 0x42, 0x58, 0x20, 0xf9, 0x53, 0x67, 0x52, 0xd4,
    0xad, 0x3a, 0xa1, 0xb5, 0x21, 0x2f, 0x52, 0xcc, 0x90, 0x89, 0x55, 0xb7,
    0x18, 0x7b, 0x7f, 0x8c, 0x53, 0x27, 0x4f, 0x79, 0x65, 0xbc, 0x48, 0x6a,
    0xf2, 0x87, 0x81, 0x81, 0x2a, 0xaa, 0x08, 0x9d, 0x02, 0xe9, 0xcd, 0xce,
    0xe4, 0x50, 0xc2, 0x0a, 0x46, 0xcd, 0x40, 0xdd, 0xaa, 0xa2, 0x1b, 0x3a,
    0x82, 0x20, 0x50, 0xa1, 0x42, 0x54, 0x88, 0x22, 0x74, 0x0a, 0xa8, 0x3f,
    0x56, 0x31, 0x2d, 0x13, 0x3a, 0x9b, 0x06, 0x72, 0xe1, 0x8b, 0x05, 0x12,
    0x5b, 0x1a, 0xdc, 0x97, 0xdc, 0x9a, 0x64, 0xf6, 0x93, 0x59, 0x66, 0x3f,
    0x99, 0x65, 0x71, 0x76, 0x11, 0xf5, 0xa8, 0xda, 0xe2, 0x6c, 0x57, 0x5c,
    0x0e, 0xbc, 0xf8, 0xf6, 0x45, 0x9e, 0xf8, 0xa7, 0x27, 0x98, 0xfc, 0x60,
    0x92, 0xfe, 0x5f, 0xf6, 0xb7, 0xe8, 0x7b, 0xb6, 0xf4, 0x50, 0xbc, 0x5e,
    0x44, 0x37, 0x74, 0x67, 0x26, 0x4b, 0x89, 0x15, 0x6d, 0x96, 0x2b, 0x65,
    0xa7, 0xac, 0x24, 0x23, 0x85, 0x25, 0xf2, 0x56, 0xc3, 0x91, 0x4a, 0x97,
    0x02, 0x40, 0x2c, 0x1c, 0x43, 0x52, 0x24, 0xfa, 0x77, 0xf7, 0x3b, 0x9d,
    0x8f, 0x2a, 0xcc, 0x08, 0x33, 0x1e, 0x2e, 0xdd, 0x95, 0x46, 0x47, 0x47,
    0x08, 0x0b, 0x28, 0x8a, 0x42, 0xff, 0xee, 0x7e, 0xa8, 0x81, 0x12, 0x55,
    0xbc, 0x81, 0x94, 0x24, 0xc9, 0x9b, 0xe1, 0x6e, 0x24, 0xe8, 0xb7, 0x75,
    0x84, 0x4e, 0x21, 0xc0, 0x91, 0xae, 0x08, 0x61, 0x81, 0xbe, 0xad, 0x7d,
    0x64, 0x0e, 0x65, 0x88, 0x49, 0x31, 0x22, 0x6b, 0x22, 0x84, 0xd6, 0x39,
    0x13, 0xdc, 0x8d, 0xb8, 0xf4, 0xd6, 0x34, 0xf9, 0x4f, 0xf2, 0xe8, 0x25,
    0x9d, 0xe9, 0xab, 0xd3, 0xec, 0xd8, 0xb9, 0x23, 0xa0, 0xf7, 0x22, 0x8e,
    0x46, 0x44, 0xea, 0xe8, 0xa8, 0x61, 0x95, 0x90, 0x1c, 0x22, 0x86, 0x43,
    0x5f, 0x6e, 0x2a, 0x3f, 0x29, 0x13, 0x09, 0x47, 0xb0, 0xb0, 0x3c, 0x7f,
    0x46, 0xc4, 0x08, 0x91, 0x75, 0xce, 0x64, 0x0b, 0x0c, 0x64, 0x62, 0x4b,
    0x82, 0x6a, 0xb5, 0xea, 0xfd, 0x8e, 0x6f, 0x8a, 0x13, 0xdf, 0x14, 0x67,
    0xe2, 0xfc, 0x04, 0x83, 0xbf, 0x1d, 0x24, 0xbd, 0x33, 0x4d, 0x6c, 0x4b,
    0x2b, 0x3f, 0x42, 0x83, 0x03, 0xe5, 0x4d, 0x32, 0x07, 0x5e, 0x38, 0xc0,
    0xc4, 0xf9, 0x09, 0x5e, 0x3b, 0xf9, 0x5a, 0x8b, 0x3e, 0xfe, 0x74, 0x1c,
    0x00, 0xc3, 0x30, 0x98, 0x2f, 0xcd, 0xa3, 0x74, 0x29, 0x81, 0x99, 0xef,
    0x8a, 0x56, 0xd4, 0x70, 0x97, 0xc2, 0xb4, 0xe2, 0xcc, 0x50, 0xbf, 0x8c,
    0x9e, 0x19, 0x75, 0x96, 0xd1, 0xe5, 0x43, 0xba, 0xcb, 0x99, 0x91, 0x0d,
    0x91, 0x80, 0xf3, 0xb3, 0x67, 0xb2, 0x2b, 0xe2, 0x5c, 0x91, 0x25, 0x19,
    0x75, 0xb7, 0xda, 0x82, 0x8b, 0x45, 0x63, 0x1e, 0x47, 0xba, 0x13, 0xa7,
    0x74, 0xb3, 0x84, 0x24, 0x49, 0xec, 0xfd, 0x8f, 0xbd, 0xce, 0x86, 0x0b,
    0xcb, 0x5b, 0x1e, 0xa1, 0x11, 0x71, 0xd5, 0xa5, 0x2a, 0x7d, 0xbd, 0x7d,
    0x4c, 0x7c, 0x38, 0x41, 0xfe, 0xcf, 0x79, 0x7a, 0x7e, 0xd2, 0x43, 0x64,
    0x7d, 0x24, 0x10, 0x91, 0x6a, 0x58, 0x0d, 0x94, 0x13, 0x2a, 0x02, 0x17,
    0xaf, 0x5e, 0xa4, 0x5b, 0xea, 0x46, 0x47, 0x47, 0xd9, 0xa4, 0x90, 0x78,
    0x26, 0x38, 0xd1, 0x0d, 0x0c, 0xa2, 0x44, 0x9d, 0x49, 0xb0, 0xae, 0x51,
    0xef, 0x8f, 0xca, 0x5f, 0x94, 0x03, 0xc0, 0x66, 0x2e, 0xca, 0x1e, 0xcc,
    0xa2, 0x74, 0x29, 0x58, 0x35, 0x0b, 0x35, 0xa3, 0xb6, 0x6c, 0x62, 0x3c,
    0x67, 0x2c, 0x73, 0x20, 0xc0, 0xd9, 0xe1, 0xb3, 0x88, 0xa2, 0x48, 0xfe,
    0x4f, 0xf9, 0x16, 0xfd, 0xde, 0xfd, 0x7b, 0x89, 0x46, 0xa3, 0x00, 0x0c,
    0x1f, 0x1f, 0xa6, 0xfc, 0x97, 0x72, 0x8b, 0xad, 0x7a, 0xb9, 0x4e, 0xff,
    0x01, 0x27, 0x9a, 0x85, 0xb0, 0x40, 0x34, 0x19, 0x45, 0x0a, 0x4b, 0x81,
    0xa5, 0x56, 0x0a, 0x4b, 0xc8, 0x61, 0x19, 0x75, 0xab, 0x4a, 0x62, 0x63,
    0x02, 0x35, 0xa5, 0x3a, 0x1b, 0xa6, 0xb5, 0xed, 0x37, 0x28, 0xed, 0x70,
    0x7e, 0x91, 0xc2, 0x92, 0xa7, 0x4f, 0x3c, 0xe3, 0xa4, 0x7e, 0x1a, 0x91,
    0x91, 0x19, 0x38, 0xe8, 0x1c, 0x85, 0x2a, 0xb7, 0x2b, 0x4c, 0xbd, 0x37,
    0x45, 0x62, 0x43, 0x82, 0xee, 0x67, 0xba, 0x83, 0x76, 0x90, 0xbc, 0xfe,
    0xf6, 0x24, 0x7b, 0x50, 0x62, 0x0a, 0x95, 0x72, 0x85, 0xd2, 0xa7, 0xa5,
    0x16, 0xbd, 0xeb, 0x2f, 0x37, 0xbf, 0x52, 0xae, 0xb0, 0x58, 0x5c, 0x24,
    0xf7, 0x7e, 0x0e, 0xed, 0x7d, 0x8d, 0xc9, 0x2b, 0x93, 0x2d, 0xbe, 0x09,
    0x94, 0xf7, 0x6d, 0x96, 0x7e, 0xd4, 0x1c, 0x61, 0x55, 0xab, 0x1a, 0xf8,
    0x6d, 0xd4, 0x0c, 0xa6, 0x7f, 0x3f, 0xed, 0x75, 0x60, 0x6f, 0xff, 0xde,
    0x16, 0xe3, 0x10, 0x5c, 0xf3, 0x43, 0xb1, 0x10, 0xd9, 0x57, 0xb2, 0x2b,
    0xea, 0x5d, 0x7b, 0x56, 0xcd, 0x62, 0xfb, 0xbf, 0x6c, 0x67, 0xf0, 0xc8,
    0x20, 0x5a, 0x51, 0x63, 0xe1, 0xf3, 0x05, 0x06, 0x8f, 0x0c, 0xf2, 0x44,
    0xf7, 0x13, 0x5e, 0x34, 0x1e, 0x7b, 0xf5, 0x18, 0x31, 0x29, 0x06, 0x02,
    0x2d, 0x47, 0x01, 0xa1, 0x53, 0x70, 0x06, 0xa4, 0xcd, 0x75, 0x9e, 0x1f,
    0x17, 0xeb, 0x8c, 0xad, 0x8a, 0xd3, 0x0d, 0x9d, 0xdc, 0x5b, 0x39, 0xc6,
    0x4e, 0x3b, 0x7c, 0x76, 0xea, 0xe4, 0x29, 0xca, 0xe5, 0xe0, 0x04, 0xd3,
    0xd1, 0xe9, 0xff, 0x55, 0xbf, 0xd7, 0xaf, 0x37, 0xcf, 0xbf, 0xe9, 0x6d,
    0xfd, 0x03, 0xf5, 0x35, 0x71, 0x60, 0xfa, 0x17, 0xce, 0x99, 0x78, 0xfc,
    0x83, 0x71, 0xb8, 0xbf, 0x3a, 0x47, 0x8a, 0x11, 0x11, 0x21, 0x26, 0x10,
    0x8d, 0x45, 0x11, 0x62, 0x02, 0xb1, 0x70, 0x8c, 0xf9, 0xd2, 0xbc, 0x87,
    0x91, 0x91, 0x83, 0xe5, 0xd7, 0x35, 0xca, 0xb7, 0x1c, 0x3f, 0xfc, 0x1c,
    0x09, 0x78, 0xcb, 0xe5, 0xb9, 0xdc, 0x39, 0x00, 0x26, 0xdf, 0x9b, 0x64,
    0xfc, 0xed, 0xf1, 0xe6, 0x62, 0x1e, 0x07, 0xba, 0x32, 0xf4, 0xea, 0x50,
    0x20, 0x82, 0xfc, 0xfa, 0xc4, 0x33, 0x09, 0xe6, 0xb4, 0x39, 0x44, 0x51,
    0xc4, 0x34, 0x4d, 0x72, 0xaf, 0xe7, 0xd8, 0xae, 0x6e, 0xe7, 0xa9, 0x67,
    0x9f, 0x22, 0xf7, 0x7a, 0x0e, 0xd3, 0x34, 0x11, 0xc2, 0x02, 0xc7, 0x5e,
    0x3d, 0x46, 0xe6, 0xa7, 0x19, 0xe7, 0xee, 0x73, 0x4b, 0xa2, 0x35, 0xd2,
    0x7c, 0x33, 0x7a, 0x25, 0x79, 0x14, 0x9c, 0x61, 0x18, 0x4c, 0x9c, 0x9f,
    0xe0, 0xf0, 0x6f, 0x0f, 0x33, 0x7c, 0x7c, 0x98, 0xe1, 0xe3, 0xc3, 0xd4,
    0xef, 0x39, 0xc7, 0x86, 0x66, 0x8e, 0x1c, 0x3d, 0x33, 0xea, 0x2d, 0xb3,
    0x3f, 0xcf, 0xfe, 0x9c, 0xea, 0xff, 0x04, 0x27, 0xbe, 0x3f, 0x62, 0xf4,
    0x9a, 0xee, 0x44, 0xe5, 0x16, 0x05, 0xa1, 0x2a, 0x30, 0xfa, 0xce, 0x68,
    0x8b, 0xde, 0x5f, 0x4e, 0xe9, 0x52, 0x18, 0x7a, 0x69, 0x88, 0xa1, 0x17,
    0x86, 0x18, 0x7a, 0x69, 0x08, 0xe5, 0x39, 0x25, 0x10, 0x79, 0x3a, 0xfa,
    0x8a, 0x11, 0xd9, 0x76, 0xd7, 0x9a, 0xea, 0x4d, 0x61, 0x59, 0x16, 0xb2,
    0xe4, 0x38, 0x3f, 0x41, 0x82, 0xfe, 0x23, 0xfd, 0xe4, 0x3f, 0xce, 0x53,
    0xae, 0x94, 0x19, 0x7f, 0x6f, 0x9c, 0xe4, 0xb6, 0x24, 0x89, 0x78, 0xc2,
    0xc3, 0x12, 0x5e, 0x76, 0x9a, 0x2b, 0x6b, 0xa1, 0x70, 0xb9, 0xc0, 0xe1,
    0x5f, 0x1f, 0x6e, 0xab, 0xef, 0x4e, 0x75, 0x73, 0x67, 0xe1, 0x0e, 0x87,
    0x8f, 0x1d, 0x46, 0xfb, 0x58, 0xa3, 0x72, 0xbb, 0xe2, 0x74, 0x48, 0x92,
    0xe8, 0xd9, 0xd6, 0x43, 0x66, 0x57, 0x06, 0x65, 0xd3, 0xf2, 0xae, 0xed,
    0x69, 0x87, 0x4b, 0x7a, 0xa2, 0x3d, 0xa4, 0x7a, 0x53, 0x98, 0xa6, 0xe9,
    0x71, 0x58, 0x3b, 0x79, 0x54, 0x5c, 0xb7, 0xd2, 0x8d, 0xb5, 0x64, 0x79,
    0xbb, 0x73, 0xbf, 0xcc, 0x96, 0x66, 0x89, 0x88, 0x11, 0x64, 0x45, 0x26,
    0xb9, 0x94, 0x44, 0x96, 0x1b, 0x03, 0x3a, 0xfd, 0xfb, 0x69, 0xf6, 0xec,
    0xdf, 0x83, 0x65, 0x59, 0x0c, 0x1e, 0x1f, 0x0c, 0xec, 0xce, 0xdb, 0x71,
    0x60, 0xf6, 0x97, 0x59, 0xf6, 0xbd, 0xbc, 0x0f, 0xf3, 0x53, 0xd3, 0xdb,
    0xac, 0xb4, 0xe3, 0xc8, 0x38, 0x71, 0xf4, 0x9a, 0x4e, 0xb7, 0xd2, 0x4d,
    0xfd, 0x7e, 0x1d, 0x79, 0x9d, 0xec, 0x9c, 0x4f, 0x7d, 0x91, 0xb7, 0x12,
    0x47, 0xb6, 0x1d, 0x48, 0xad, 0xa8, 0x51, 0xbf, 0x5b, 0x77, 0xf8, 0xcb,
    0x17, 0xfe, 0x53, 0x57, 0xa6, 0xa8, 0x96, 0xab, 0x94, 0x2a, 0x25, 0x67,
    0x96, 0xdf, 0x87, 0x81, 0xe7, 0x07, 0x3a, 0xd2, 0xa9, 0xb4, 0xed, 0xbd,
    0x4a, 0xf8, 0x1d, 0x95, 0xea, 0x66, 0x66, 0x76, 0x06, 0xad, 0xa8, 0xb5,
    0x8d, 0x8c, 0x90, 0x1c, 0x62, 0x7c, 0x62, 0x7c, 0xc5, 0x57, 0x88, 0xd0,
    0x52, 0x08, 0x75, 0xab, 0xea, 0xf1, 0x99, 0xba, 0x5f, 0x45, 0xdd, 0xaf,
    0x06, 0xed, 0xad, 0x6f, 0x6d, 0xbf, 0x8b, 0x73, 0x5f, 0x71, 0x56, 0xc2,
    0x8d, 0x9e, 0x19, 0x85, 0x87, 0xa0, 0x7d, 0xe2, 0xb3, 0xd7, 0xf4, 0x0a,
    0x92, 0xdc, 0x9c, 0xec, 0x18, 0x1d, 0x1e, 0xb5, 0xfd, 0xcb, 0xf2, 0xe5,
    0x0f, 0x2f, 0x77, 0xcc, 0xcc, 0xce, 0xd8, 0x17, 0x7f, 0x77, 0x11, 0x79,
    0x9d, 0xcc, 0xcc, 0xec, 0x0c, 0x3d, 0xc9, 0x1e, 0x20, 0xb8, 0x2b, 0x75,
    0xfb, 0x1b, 0x89, 0x45, 0xe8, 0xdb, 0xd9, 0xc7, 0xe4, 0xd5, 0xc9, 0xb6,
    0x7a, 0xb7, 0x9c, 0x69, 0x9a, 0x58, 0xf7, 0x2c, 0x16, 0xbe, 0x58, 0x40,
    0x0e, 0xcb, 0x58, 0x15, 0x8b, 0xc8, 0x96, 0x20, 0x1f, 0xb4, 0x44, 0xe4,
    0xf2, 0x20, 0x7b, 0x03, 0x39, 0xf4, 0xeb, 0x21, 0xe2, 0x9d, 0x71, 0x90,
    0x9c, 0xe5, 0xa4, 0x6c, 0x95, 0x11, 0x2d, 0x11, 0x03, 0x03, 0xe3, 0x2b,
    0x03, 0x1d, 0x67, 0xab, 0xac, 0x2f, 0xe9, 0x08, 0x35, 0x81, 0x45, 0x16,
    0x29, 0x97, 0xca, 0x58, 0x61, 0xcb, 0xd6, 0x8a, 0x1a, 0x15, 0xab, 0x82,
    0x84, 0x44, 0x49, 0x2f, 0x39, 0x38, 0x17, 0x8f, 0x8e, 0x58, 0x13, 0x29,
    0x2e, 0x15, 0x57, 0xd4, 0xcb, 0xc8, 0x94, 0x6b, 0x65, 0x04, 0x53, 0xa0,
    0xbc, 0xb4, 0x7c, 0xe4, 0xe8, 0x94, 0x89, 0x85, 0x63, 0xcc, 0x94, 0x67,
    0x5a, 0xf0, 0x82, 0xb9, 0x5c, 0xbf, 0x50, 0xc6, 0x9c, 0x35, 0xdb, 0xda,
    0x73, 0x71, 0x06, 0xc6, 0xea, 0x38, 0x5f, 0x7f, 0xfc, 0x87, 0xf9, 0x45,
    0x16, 0x89, 0xae, 0x89, 0x3a, 0xfd, 0xbb, 0xaa, 0xb1, 0x58, 0x73, 0xf4,
    0x56, 0xd8, 0x22, 0xde, 0x19, 0xb7, 0x2f, 0x4e, 0x5e, 0x64, 0xf2, 0x03,
    0x67, 0x33, 0x72, 0xf6, 0x37, 0x67, 0x9d, 0x4d, 0xe0, 0xda, 0x95, 0x39,
    0x30, 0xbd, 0x3b, 0xcd, 0xe4, 0xd5, 0xc9, 0x55, 0x39, 0xd2, 0x28, 0x19,
    0x94, 0x4a, 0xa5, 0xc0, 0xc0, 0xf9, 0x79, 0x58, 0x46, 0xa6, 0x44, 0xa9,
    0xfd, 0xae, 0x15, 0xa0, 0xfa, 0x45, 0x15, 0x35, 0xa9, 0x3a, 0x9d, 0x5b,
    0xe7, 0x74, 0x32, 0xb6, 0x3e, 0x86, 0x25, 0x5a, 0xc4, 0x9f, 0x8c, 0x07,
    0xf2, 0xe5, 0x88, 0xec, 0xe5, 0x9b, 0x61, 0x13, 0x79, 0x9d, 0x8c, 0x29,
    0x98, 0xc4, 0x9f, 0x8c, 0x63, 0x89, 0x56, 0x03, 0xe7, 0x4b, 0xcd, 0xf0,
    0xea, 0x7a, 0x1d, 0x9d, 0x98, 0x1c, 0x83, 0x0d, 0xd0, 0xb3, 0xa5, 0x87,
    0x58, 0x34, 0x46, 0x4c, 0x8e, 0xb5, 0xc5, 0xc9, 0xeb, 0x7c, 0xf5, 0x0b,
    0xe6, 0x8a, 0xf6, 0x1e, 0x19, 0xe7, 0xeb, 0x4f, 0x73, 0xea, 0xf6, 0x4f,
    0x5f, 0xa3, 0x37, 0xda, 0x1f, 0x69, 0x94, 0x77, 0x23, 0x64, 0xe1, 0xeb,
    0x05, 0x2f, 0xba, 0x56, 0xe2, 0xc0, 0xc8, 0xfa, 0x08, 0x7d, 0xbf, 0xe8,
    0x5b, 0x95, 0x23, 0xdb, 0xa5, 0x75, 0xbd, 0x0e, 0xcb, 0x34, 0xbc, 0x1a,
    0x47, 0x76, 0xd8, 0x76, 0xe3, 0x61, 0x59, 0xff, 0x4a, 0x0f, 0x5e, 0x0f,
    0xfd, 0x90, 0x3e, 0x72, 0x6a, 0x61, 0x11, 0xdb, 0xb4, 0xcc, 0xc5, 0xf7,
    0x61, 0xfe, 0xf6, 0x3c, 0x72, 0x58, 0x6e, 0x79, 0x6c, 0xaf, 0x56, 0xab,
    0x58, 0xf7, 0x2c, 0xaf, 0x9c, 0xab, 0xd7, 0x75, 0xe7, 0xba, 0xad, 0x9d,
    0xfd, 0xee, 0x8d, 0xdd, 0xde, 0x12, 0x5a, 0xbf, 0x5f, 0xc7, 0x34, 0x4c,
    0x8f, 0x4b, 0xdb, 0x0e, 0xe4, 0x0f, 0xf2, 0x7f, 0x14, 0x1d, 0xe8, 0xa4,
    0x71, 0x36, 0x75, 0x23, 0xa5, 0x46, 0xcb, 0x53, 0x1f, 0x00, 0x77, 0x01,
    0xa1, 0x8d, 0x5e, 0xa7, 0xc1, 0xe9, 0xfe, 0x14, 0x02, 0x1b, 0x1e, 0x0f,
    0x27, 0x34, 0xea, 0x6c, 0x39, 0x7e, 0x74, 0x74, 0x74, 0x78, 0x7f, 0xfd,
    0x07, 0xfa, 0xbd, 0x9b, 0x1e, 0x35, 0xa5, 0x32, 0x7e, 0xb2, 0xf5, 0xd8,
    0xe1, 0x8a, 0x56, 0xd4, 0xe8, 0xe8, 0xe8, 0x58, 0x51, 0x0f, 0xce, 0x67,
    0x1f, 0xdf, 0x85, 0x79, 0x1c, 0x51, 0x53, 0xaa, 0x77, 0x8f, 0xd9, 0xad,
    0x74, 0xa3, 0xa6, 0xd4, 0x47, 0x6a, 0xc7, 0xe3, 0x8a, 0xbf, 0xdd, 0xd3,
    0x57, 0xa7, 0xe9, 0xe8, 0xe8, 0x08, 0x5e, 0xaa, 0xbb, 0xaf, 0x36, 0xae,
    0xac, 0x5b, 0xfe, 0x6b, 0x37, 0x88, 0xe0, 0x6c, 0xbc, 0xda, 0xe9, 0x65,
    0x5f, 0xbe, 0x3f, 0x5d, 0xb7, 0x02, 0xce, 0x57, 0x67, 0xdb, 0x67, 0xac,
    0xd3, 0xb9, 0xd3, 0x5c, 0x1a, 0xbf, 0x84, 0x56, 0xd4, 0xd8, 0xa7, 0xee,
    0x83, 0x2a, 0x0c, 0xbd, 0x3c, 0x44, 0x3c, 0x15, 0xa7, 0x7e, 0xb7, 0x4e,
    0xbd, 0x5c, 0xa7, 0x7e, 0xb7, 0xee, 0x74, 0x66, 0xf9, 0xa6, 0x27, 0x70,
    0xf4, 0x58, 0x41, 0xfc, 0xe7, 0xcc, 0x85, 0xcf, 0x17, 0xa8, 0x97, 0xeb,
    0x5e, 0xea, 0x17, 0xbd, 0xa4, 0x3b, 0xdf, 0xfa, 0x54, 0x97, 0xbf, 0xf9,
    0x59, 0x45, 0xe4, 0xb0, 0xec, 0x1c, 0xe0, 0x2b, 0x65, 0xb4, 0xcb, 0x5a,
    0x4b, 0x3b, 0xea, 0x77, 0xeb, 0xce, 0xee, 0xf5, 0x21, 0x5e, 0x7b, 0xf5,
    0x92, 0x4e, 0xfd, 0x6e, 0xdd, 0xd3, 0xeb, 0x25, 0x87, 0xab, 0xdc, 0xf6,
    0x50, 0x6d, 0xaa, 0xc4, 0xdd, 0x5d, 0x56, 0x61, 0xdf, 0xfe, 0x7d, 0x8c,
    0x9c, 0x18, 0x41, 0x4d, 0xa9, 0xcc, 0x97, 0xe6, 0x3d, 0xfb, 0xfa, 0x57,
    0xc1, 0x67, 0x36, 0xd7, 0x3f, 0x6e, 0x3d, 0xd0, 0x78, 0x51, 0x69, 0xc6,
    0x2f, 0x14, 0x17, 0x3c, 0x7d, 0xb3, 0x1d, 0x1e, 0xb6, 0xe2, 0xf5, 0x92,
    0x8e, 0xfe, 0x95, 0x1e, 0xb8, 0x2c, 0x68, 0xf9, 0xd4, 0x03, 0xb0, 0x6f,
    0x7d, 0x76, 0xcb, 0xf9, 0xf1, 0xad, 0xf3, 0xbb, 0xf0, 0x6e, 0xc1, 0x4e,
    0xf5, 0xa6, 0x3c, 0x8c, 0xff, 0x3b, 0x1b, 0x51, 0x14, 0xed, 0x39, 0x6d,
    0xce, 0x2e, 0x68, 0x05, 0xbb, 0x8d, 0xb9, 0x80, 0xdc, 0xfa, 0xec, 0x96,
    0x87, 0x71, 0xcb, 0xba, 0x76, 0xda, 0x7d, 0x23, 0xe3, 0xea, 0x57, 0x92,
    0x54, 0x6f, 0xca, 0xce, 0xec, 0xca, 0x04, 0xca, 0xfb, 0xdb, 0x51, 0x78,
    0xb7, 0xd0, 0x62, 0xab, 0xa0, 0x39, 0x7d, 0x71, 0xbf, 0x09, 0x1a, 0x39,
    0x31, 0x62, 0xa7, 0x7a, 0x53, 0x76, 0x41, 0x2b, 0x78, 0x18, 0xa5, 0x4b,
    0x69, 0xdb, 0xee, 0xcc, 0xae, 0x4c, 0xc0, 0x0f, 0xa9, 0xde, 0x54, 0xa0,
    0x0f, 0xae, 0x4d, 0x7f, 0xbd, 0xae, 0xff, 0xda, 0xf5, 0xd9, 0xb5, 0xb5,
    0x52, 0xfe, 0x9d, 0x2f, 0xef, 0x04, 0xf2, 0x0f, 0xbc, 0x70, 0x20, 0xe0,
    0xa3, 0xcc, 0xae, 0x4c, 0x63, 0xdc, 0x9a, 0x9d, 0xe3, 0x77, 0x8a, 0x5b,
    0x68, 0xe4, 0xc4, 0x88, 0xdd, 0xd7, 0xdb, 0xe7, 0xe5, 0x89, 0xa2, 0xe8,
    0x7c, 0xb3, 0xf3, 0x8d, 0x6d, 0x1f, 0xda, 0x75, 0xc8, 0x8e, 0x46, 0xa3,
    0x81, 0x41, 0xf2, 0xe4, 0x1b, 0xc7, 0x09, 0x05, 0xad, 0x60, 0xdb, 0xdf,
    0xda, 0xf6, 0x2d, 0x2d, 0x38, 0x90, 0x67, 0xdf, 0x38, 0x6b, 0xdb, 0xb6,
    0xed, 0x39, 0xee, 0xc2, 0xbb, 0x17, 0x6c, 0x51, 0x14, 0x3d, 0xbc, 0x3b,
    0x48, 0xab, 0x0d, 0xa4, 0xbf, 0x83, 0x7e, 0xa7, 0x3f, 0xf8, 0xeb, 0x03,
    0x1b, 0xb0, 0xcf, 0xe5, 0xce, 0xd9, 0xb6, 0x6d, 0xdb, 0x97, 0xc6, 0x2f,
    0x79, 0x93, 0x34, 0xd5, 0x9b, 0xf2, 0xf2, 0xcf, 0xe5, 0xce, 0x79, 0xbf,
    0xa3, 0xd1, 0xa8, 0x5d, 0xb8, 0x5c, 0xf0, 0xea, 0x77, 0xc5, 0x9d, 0x1c,
    0xae, 0x5d, 0x7f, 0xfd, 0x87, 0x76, 0x1d, 0xb2, 0x6d, 0xdb, 0xb6, 0x4f,
    0x0f, 0x9f, 0xb6, 0x53, 0xbd, 0xa9, 0x96, 0x7a, 0xcf, 0xe5, 0xce, 0x05,
    0xda, 0x73, 0x7a, 0xf8, 0xb4, 0xe7, 0x17, 0xc0, 0x2e, 0x5c, 0x2e, 0xac,
    0x98, 0x1f, 0x8d, 0x46, 0xbd, 0x49, 0xe6, 0xe2, 0x6e, 0x7c, 0x74, 0x23,
    0x50, 0xaf, 0x2b, 0x6d, 0x97, 0x56, 0x6f, 0x79, 0x7a, 0xe8, 0xdc, 0xf6,
    0xc7, 0xc5, 0x78, 0xe0, 0x7a, 0x4c, 0xe9, 0x52, 0x9c, 0xdd, 0x56, 0x04,
    0xf6, 0xbc, 0xbc, 0x87, 0x4a, 0xa5, 0xd2, 0xf2, 0x3a, 0x01, 0xb0, 0x70,
    0x7b, 0x81, 0xa7, 0x9e, 0x7d, 0x8a, 0xed, 0xea, 0x76, 0xb4, 0x4f, 0xb4,
    0xc0, 0xb9, 0x09, 0x20, 0x95, 0x4c, 0x01, 0x8d, 0x77, 0xc7, 0xbd, 0xfb,
    0xf7, 0xa2, 0x74, 0x29, 0xa8, 0x29, 0xe7, 0x12, 0x20, 0x7b, 0x28, 0xdb,
    0x6c, 0xb2, 0x45, 0x32, 0xbb, 0x32, 0x4c, 0x9c, 0x9f, 0xf0, 0x96, 0x2d,
    0xb7, 0x1d, 0xb3, 0x7f, 0x99, 0x05, 0xa0, 0xff, 0x88, 0x73, 0xf9, 0xbe,
    0xe7, 0xc0, 0x9e, 0x80, 0xde, 0xdd, 0xfa, 0xbb, 0x69, 0xe6, 0x85, 0x0c,
    0x6a, 0x4a, 0x65, 0x7b, 0xc6, 0xb9, 0xfb, 0xad, 0xd6, 0x1a, 0xeb, 0xab,
    0xeb, 0x8f, 0xcc, 0xae, 0x0c, 0x3b, 0xfe, 0x6d, 0x47, 0xa0, 0x7e, 0xf7,
    0xe5, 0xc3, 0x5a, 0x63, 0x05, 0xea, 0xcd, 0xbc, 0x90, 0x09, 0xd4, 0xef,
    0xe6, 0x77, 0xa7, 0xba, 0x21, 0xe2, 0x5c, 0x53, 0xa6, 0x7a, 0x53, 0xcc,
    0x7c, 0x31, 0xb3, 0x62, 0x7e, 0xa5, 0x52, 0xa1, 0x78, 0xbd, 0xc8, 0x76,
    0x75, 0x3b, 0xdb, 0x33, 0xdb, 0x01, 0xd0, 0x66, 0xb5, 0x40, 0xbd, 0xae,
    0xb4, 0x1d, 0xc8, 0xfc, 0xc7, 0x79, 0xb4, 0x2b, 0x1a, 0xdd, 0xcf, 0x3a,
    0xdb, 0xdb, 0x3d, 0xcf, 0xef, 0x09, 0xe8, 0x8b, 0xd7, 0x8b, 0x8c, 0x9f,
    0x19, 0x67, 0xea, 0xca, 0x14, 0xb9, 0x23, 0x39, 0x52, 0xbd, 0xa9, 0x00,
    0x37, 0xb9, 0x1c, 0x94, 0x78, 0x26, 0xc1, 0x72, 0xd4, 0xa3, 0xa6, 0xd4,
    0x96, 0xc1, 0x6e, 0xfe, 0x3d, 0x7d, 0x75, 0x9a, 0xe2, 0xf5, 0x22, 0xa7,
    0x4e, 0x9e, 0x62, 0xe6, 0xcf, 0x33, 0x0c, 0xfd, 0x66, 0xc8, 0xd3, 0xb5,
    0xe5, 0x2e, 0x9c, 0x17, 0xfa, 0x91, 0x13, 0x23, 0xec, 0xc9, 0xec, 0x81,
    0x6a, 0xc3, 0xe9, 0xc9, 0xcd, 0x49, 0x00, 0x06, 0x76, 0x0f, 0xb0, 0x50,
    0x5c, 0x60, 0x6a, 0x62, 0x0a, 0x68, 0xe8, 0xb5, 0xa2, 0xe6, 0x70, 0xd2,
    0x32, 0x3f, 0x96, 0xae, 0x97, 0x30, 0xab, 0x26, 0x37, 0x3e, 0xba, 0x41,
    0xe9, 0x66, 0x09, 0xfd, 0xb6, 0x8f, 0xab, 0x96, 0x39, 0x72, 0x6a, 0x62,
    0x8a, 0xd2, 0xcd, 0x52, 0xe0, 0xa1, 0x58, 0x0e, 0xcb, 0x81, 0x54, 0xdd,
    0xaa, 0x22, 0x8a, 0x22, 0x43, 0x07, 0x86, 0xd0, 0x8a, 0x1a, 0x03, 0xbb,
    0x07, 0x10, 0x45, 0xd1, 0xb9, 0xa1, 0x02, 0x72, 0x47, 0x72, 0x4c, 0x5d,
    0x99, 0x62, 0xfc, 0xcc, 0x38, 0xc5, 0xeb, 0x45, 0x32, 0xcf, 0x39, 0x03,
    0x3e, 0x78, 0x64, 0xb0, 0x25, 0x3f, 0xd5, 0x9b, 0x22, 0xdd, 0x95, 0xe6,
    0xd2, 0xe5, 0x4b, 0xdc, 0xf8, 0xe8, 0x06, 0xb6, 0x6d, 0x93, 0x3d, 0x98,
    0x0d, 0xd4, 0xe7, 0x49, 0xbb, 0xa5, 0x15, 0xdf, 0x5a, 0xed, 0x7e, 0x07,
    0xda, 0xcc, 0x91, 0xee, 0xda, 0x9d, 0xea, 0x4d, 0xd9, 0xf6, 0xb7, 0x41,
    0x6e, 0xf2, 0x73, 0x90, 0x5f, 0x9a, 0x39, 0xd2, 0xe5, 0x62, 0xd7, 0xf6,
    0xa5, 0x37, 0x2e, 0x91, 0x7d, 0x25, 0x1b, 0xa8, 0xbf, 0x1d, 0xde, 0xbf,
    0xb4, 0xb9, 0xf5, 0x28, 0x5d, 0x8a, 0xb7, 0x0c, 0xb9, 0x65, 0xe6, 0xb4,
    0x39, 0x3b, 0x1a, 0x8d, 0x06, 0x6c, 0xb9, 0x9f, 0x72, 0xfa, 0xf9, 0xd0,
    0xed, 0xa7, 0x9b, 0xe7, 0x5f, 0xaa, 0x9b, 0xdb, 0x7d, 0xed, 0x8f, 0xd7,
    0x56, 0xe5, 0x5a, 0xdb, 0x76, 0xb8, 0xcd, 0xad, 0xd7, 0xff, 0xfd, 0xab,
    0xfb, 0x9b, 0x65, 0x4e, 0xf4, 0x73, 0x67, 0xbb, 0x7c, 0xfb, 0xdb, 0xe0,
    0x9e, 0xa1, 0x5d, 0xbf, 0xbd, 0x71, 0x6b, 0xf1, 0xf6, 0x23, 0x88, 0x7f,
    0x50, 0xff, 0x96, 0x72, 0x4b, 0xbb, 0xe5, 0x0d, 0x86, 0xcb, 0x91, 0x7f,
    0xaf, 0xba, 0xbe, 0x0f, 0x69, 0x37, 0x19, 0x57, 0xcb, 0x7f, 0x1c, 0xf9,
    0xce, 0xcf, 0x21, 0x9b, 0xe5, 0xe2, 0xef, 0x2e, 0x06, 0x6e, 0x14, 0xfe,
    0x96, 0x92, 0x48, 0x25, 0x88, 0xbd, 0x17, 0x63, 0xbb, 0xea, 0xf0, 0x81,
    0x28, 0x8a, 0x14, 0xb4, 0xc2, 0xdf, 0xa5, 0xae, 0xef, 0x43, 0x52, 0xbd,
    0x29, 0x8f, 0x4b, 0x1f, 0x25, 0xff, 0x71, 0xe4, 0x1f, 0xf2, 0x66, 0x47,
    0x2f, 0xe9, 0x54, 0x97, 0xaa, 0x24, 0x36, 0x26, 0x56, 0x7d, 0x34, 0xfe,
    0x41, 0x1a, 0xf2, 0xbf, 0xd7, 0xc3, 0x43, 0xe1, 0x45, 0x93, 0x9f, 0xb6,
    0x00, 0x00, 0x00, 0x00, 0x49, 0x45, 0x4e, 0x44, 0xae, 0x42, 0x60, 0x82
};

    switch (id) {
        case image0_ID:  { QImage img; img.loadFromData(image0_data, sizeof(image0_data), "PNG"); return QPixmap::fromImage(img); }
        default: return QPixmap();
    } // switch
    } // icon

};

namespace Ui {
    class linboGUI: public Ui_linboGUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LINBOGUI_V1_H
