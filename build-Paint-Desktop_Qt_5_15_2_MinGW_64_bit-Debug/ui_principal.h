/********************************************************************************
** Form generated from reading UI file 'principal.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRINCIPAL_H
#define UI_PRINCIPAL_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Principal
{
public:
    QAction *actionNuevo;
    QAction *actionGuardar;
    QAction *actionSalir;
    QAction *actionColor;
    QAction *actionAncho;
    QAction *actionLibre;
    QAction *actionLineas;
    QAction *actionRectangulos;
    QAction *actionCircunferencia;
    QWidget *centralwidget;
    QMenuBar *menubar;
    QMenu *menu_Menu;
    QMenu *menu_Estilo;
    QMenu *menu_Forma;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Principal)
    {
        if (Principal->objectName().isEmpty())
            Principal->setObjectName(QString::fromUtf8("Principal"));
        Principal->setEnabled(true);
        Principal->resize(681, 416);
        QFont font;
        font.setPointSize(10);
        font.setBold(false);
        font.setWeight(50);
        Principal->setFont(font);
        Principal->setMouseTracking(false);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/prefix1/Recursos/art-and-design.png"), QSize(), QIcon::Normal, QIcon::Off);
        Principal->setWindowIcon(icon);
        actionNuevo = new QAction(Principal);
        actionNuevo->setObjectName(QString::fromUtf8("actionNuevo"));
        actionGuardar = new QAction(Principal);
        actionGuardar->setObjectName(QString::fromUtf8("actionGuardar"));
        actionSalir = new QAction(Principal);
        actionSalir->setObjectName(QString::fromUtf8("actionSalir"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/new/prefix1/Recursos/cancelar.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSalir->setIcon(icon1);
        actionColor = new QAction(Principal);
        actionColor->setObjectName(QString::fromUtf8("actionColor"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/new/prefix1/Recursos/lapices-de-colores.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionColor->setIcon(icon2);
        actionAncho = new QAction(Principal);
        actionAncho->setObjectName(QString::fromUtf8("actionAncho"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/new/prefix1/Recursos/espesor.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAncho->setIcon(icon3);
        actionLibre = new QAction(Principal);
        actionLibre->setObjectName(QString::fromUtf8("actionLibre"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/new/prefix1/Recursos/estilo-de-pelo.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionLibre->setIcon(icon4);
        actionLineas = new QAction(Principal);
        actionLineas->setObjectName(QString::fromUtf8("actionLineas"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/new/prefix1/Recursos/linea.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionLineas->setIcon(icon5);
        actionRectangulos = new QAction(Principal);
        actionRectangulos->setObjectName(QString::fromUtf8("actionRectangulos"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/new/prefix1/Recursos/rectangulo.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionRectangulos->setIcon(icon6);
        actionCircunferencia = new QAction(Principal);
        actionCircunferencia->setObjectName(QString::fromUtf8("actionCircunferencia"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/new/prefix1/Recursos/circulo.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCircunferencia->setIcon(icon7);
        centralwidget = new QWidget(Principal);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        Principal->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Principal);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 681, 23));
        menu_Menu = new QMenu(menubar);
        menu_Menu->setObjectName(QString::fromUtf8("menu_Menu"));
        menu_Estilo = new QMenu(menubar);
        menu_Estilo->setObjectName(QString::fromUtf8("menu_Estilo"));
        menu_Forma = new QMenu(menubar);
        menu_Forma->setObjectName(QString::fromUtf8("menu_Forma"));
        Principal->setMenuBar(menubar);
        statusbar = new QStatusBar(Principal);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Principal->setStatusBar(statusbar);

        menubar->addAction(menu_Menu->menuAction());
        menubar->addAction(menu_Estilo->menuAction());
        menubar->addAction(menu_Forma->menuAction());
        menu_Menu->addAction(actionNuevo);
        menu_Menu->addAction(actionGuardar);
        menu_Menu->addSeparator();
        menu_Menu->addAction(actionSalir);
        menu_Estilo->addAction(actionColor);
        menu_Estilo->addAction(actionAncho);
        menu_Estilo->addSeparator();
        menu_Forma->addAction(actionLibre);
        menu_Forma->addAction(actionLineas);
        menu_Forma->addAction(actionCircunferencia);
        menu_Forma->addAction(actionRectangulos);

        retranslateUi(Principal);

        QMetaObject::connectSlotsByName(Principal);
    } // setupUi

    void retranslateUi(QMainWindow *Principal)
    {
        Principal->setWindowTitle(QCoreApplication::translate("Principal", "THE COLORING", nullptr));
        actionNuevo->setText(QCoreApplication::translate("Principal", "NUEVO", nullptr));
        actionGuardar->setText(QCoreApplication::translate("Principal", "GUARDAR", nullptr));
        actionSalir->setText(QCoreApplication::translate("Principal", "SALIR", nullptr));
        actionColor->setText(QCoreApplication::translate("Principal", "COLOR", nullptr));
        actionAncho->setText(QCoreApplication::translate("Principal", "ANCHO", nullptr));
        actionLibre->setText(QCoreApplication::translate("Principal", "Estilo Libre", nullptr));
        actionLineas->setText(QCoreApplication::translate("Principal", "L\303\255nea", nullptr));
        actionRectangulos->setText(QCoreApplication::translate("Principal", "Rectangulo", nullptr));
        actionCircunferencia->setText(QCoreApplication::translate("Principal", "Circunferencia", nullptr));
        menu_Menu->setTitle(QCoreApplication::translate("Principal", "&MENU", nullptr));
        menu_Estilo->setTitle(QCoreApplication::translate("Principal", "&ESTILO Y ANCHO", nullptr));
        menu_Forma->setTitle(QCoreApplication::translate("Principal", "&FORMA", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Principal: public Ui_Principal {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRINCIPAL_H
