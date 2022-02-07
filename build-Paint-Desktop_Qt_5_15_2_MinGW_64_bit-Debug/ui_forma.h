/********************************************************************************
** Form generated from reading UI file 'forma.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMA_H
#define UI_FORMA_H

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
    QMenu *menu_Archivo;
    QMenu *menu_Estilo;
    QMenu *menu_Forma;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Principal)
    {
        if (Principal->objectName().isEmpty())
            Principal->setObjectName(QString::fromUtf8("Principal"));
        Principal->setEnabled(true);
        Principal->resize(670, 416);
        QFont font;
        font.setPointSize(10);
        font.setBold(false);
        font.setWeight(50);
        Principal->setFont(font);
        Principal->setMouseTracking(false);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Recur/Recursos/roll.png"), QSize(), QIcon::Normal, QIcon::Off);
        Principal->setWindowIcon(icon);
        actionNuevo = new QAction(Principal);
        actionNuevo->setObjectName(QString::fromUtf8("actionNuevo"));
        actionGuardar = new QAction(Principal);
        actionGuardar->setObjectName(QString::fromUtf8("actionGuardar"));
        actionSalir = new QAction(Principal);
        actionSalir->setObjectName(QString::fromUtf8("actionSalir"));
        actionColor = new QAction(Principal);
        actionColor->setObjectName(QString::fromUtf8("actionColor"));
        actionAncho = new QAction(Principal);
        actionAncho->setObjectName(QString::fromUtf8("actionAncho"));
        actionLibre = new QAction(Principal);
        actionLibre->setObjectName(QString::fromUtf8("actionLibre"));
        actionLineas = new QAction(Principal);
        actionLineas->setObjectName(QString::fromUtf8("actionLineas"));
        actionRectangulos = new QAction(Principal);
        actionRectangulos->setObjectName(QString::fromUtf8("actionRectangulos"));
        actionCircunferencia = new QAction(Principal);
        actionCircunferencia->setObjectName(QString::fromUtf8("actionCircunferencia"));
        centralwidget = new QWidget(Principal);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        Principal->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Principal);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 670, 23));
        menu_Archivo = new QMenu(menubar);
        menu_Archivo->setObjectName(QString::fromUtf8("menu_Archivo"));
        menu_Estilo = new QMenu(menubar);
        menu_Estilo->setObjectName(QString::fromUtf8("menu_Estilo"));
        menu_Forma = new QMenu(menubar);
        menu_Forma->setObjectName(QString::fromUtf8("menu_Forma"));
        Principal->setMenuBar(menubar);
        statusbar = new QStatusBar(Principal);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Principal->setStatusBar(statusbar);

        menubar->addAction(menu_Archivo->menuAction());
        menubar->addAction(menu_Estilo->menuAction());
        menubar->addAction(menu_Forma->menuAction());
        menu_Archivo->addAction(actionNuevo);
        menu_Archivo->addAction(actionGuardar);
        menu_Archivo->addSeparator();
        menu_Archivo->addAction(actionSalir);
        menu_Estilo->addAction(actionColor);
        menu_Estilo->addAction(actionAncho);
        menu_Forma->addAction(actionLibre);
        menu_Forma->addAction(actionLineas);
        menu_Forma->addAction(actionRectangulos);
        menu_Forma->addAction(actionCircunferencia);

        retranslateUi(Principal);

        QMetaObject::connectSlotsByName(Principal);
    } // setupUi

    void retranslateUi(QMainWindow *Principal)
    {
        Principal->setWindowTitle(QCoreApplication::translate("Principal", "Mi Paint ", nullptr));
        actionNuevo->setText(QCoreApplication::translate("Principal", "Nuevo", nullptr));
        actionGuardar->setText(QCoreApplication::translate("Principal", "Guardar", nullptr));
        actionSalir->setText(QCoreApplication::translate("Principal", "Salir", nullptr));
        actionColor->setText(QCoreApplication::translate("Principal", "Color", nullptr));
        actionAncho->setText(QCoreApplication::translate("Principal", "Ancho", nullptr));
        actionLibre->setText(QCoreApplication::translate("Principal", "Estilo Libre", nullptr));
        actionLineas->setText(QCoreApplication::translate("Principal", "Lineal", nullptr));
        actionRectangulos->setText(QCoreApplication::translate("Principal", "Rectangular", nullptr));
        actionCircunferencia->setText(QCoreApplication::translate("Principal", "Circunferencia", nullptr));
        menu_Archivo->setTitle(QCoreApplication::translate("Principal", "&Archivo", nullptr));
        menu_Estilo->setTitle(QCoreApplication::translate("Principal", "&Estilo", nullptr));
        menu_Forma->setTitle(QCoreApplication::translate("Principal", "&Forma", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Principal: public Ui_Principal {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMA_H
