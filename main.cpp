#include "principal.h"
#include <QApplication>
#include <QTranslator>
#include <QLocale>
#include <QInputDialog>
#include <QDebug>

int main(int argc, char *argv[])
{
    qDebug()<<QLocale::system().name();
    QApplication a(argc, argv);
    // Objeto para manejar las traducciones
        QTranslator traducion;
        // Solicitando al usuario que seleccione un idioma
        QString idioma=QLocale::system().name();
        // Dependiendo del idioma seleccionado, carga el archivo de rtaducción
        //idioma griego y ruso
        if (idioma == "el_GR"){
            traducion.load(":/principal_el.qm");
        }else if (idioma == "ru_RU"){
            traducion.load(":/principal_ru.qm");
        }
        // Si es diferente de español, se instala la traducción en TODA la aplicación
        if (idioma != "es_US"){
            a.installTranslator(&traducion);
        }

    Principal w;
    w.show();
    return a.exec();
}


/**#include <QApplication>
#include <QTranslator>
#include <QLocale>
#include <QInputDialog>
#include <QDebug>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    // Objeto para manejar las traducciones
        QTranslator traducion;
        // Solicitando al usuario que seleccione un idioma
        QStringList idiomas;
        idiomas << "Ruso" << "Griego" << "Español";
        QString idiomaSeleccionado = QInputDialog::getItem(NULL,
                                   "Idioma",
                                   "Seleccione un idioma",
                                   idiomas);
        // Dependiendo del idioma seleccionado, carga el archivo de rtaducción
        if (idiomaSeleccionado == "Griego"){
            traducion.load(":/principal_el.qm");
        }else if (idiomaSeleccionado == "Ruso"){
            traducion.load(":/principal_ru.qm");
        }
        // Si es diferente de español, se instala la traducción en TODA la aplicación
        if (idiomaSeleccionado != "Español"){
            a.installTranslator(&traducion);
        }**/
/**
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    // Objeto para manejar las traducciones
        QTranslator traducion;
        // Solicitando al usuario que seleccione un idioma
        QString idioma=QLocale::system().name();
        // implementos los codigos regionales de cada pais usado para la traduccion
        if (idioma == "el_GR"){
            traducion.load(":/principal_el.qm");
        }else if (idioma == "ru_RU"){
            traducion.load(":/principal_ru.qm");
        }if (idioma != "es_ES"){
            a.installTranslator(&traducion);
        }

    Principal w;
    w.show();
    return a.exec();
}
**/

