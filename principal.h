#ifndef PRINCIPAL_H
#define PRINCIPAL_H

//librerias usadas para la creacion de las lineas usando el mouse
#include <QDebug>
#include <QColorDialog>
#include <QFileDialog>
#include <QMainWindow>
#include <QImage>
#include <QAbstractButton>
#include <QIcon>
#include <QPixmap>
#include <QInputDialog>
#include <QPainter>
#include <QMouseEvent>
#include <QPaintEvent>
#include <QMessageBox>
#include <QDialog>
#include <QDir>

#define DEFAULT_ANCHO 2

QT_BEGIN_NAMESPACE
namespace Ui { class Principal; }
QT_END_NAMESPACE

class Principal : public QMainWindow
{
    Q_OBJECT

public:
    Principal(QWidget *parent = nullptr);
    ~Principal();
protected:
    void paintEvent(QPaintEvent *event) override;
    void mousePressEvent(QMouseEvent *event) override;
    void mouseMoveEvent(QMouseEvent *event) override;
private slots:

    void on_actionColor_triggered();
    void on_actionLibre_triggered();
    void on_actionCircunferencia_triggered();
    void on_actionGuardar_triggered();
    void on_actionLineas_triggered();
    void on_actionAncho_triggered();
    void on_actionRectangulos_triggered();
    void on_actionSalir_triggered();
    void on_actionNuevo_triggered();

private:
    Ui::Principal *ui;
    //Es el fondo en el cual se va a poder dibujar
    QImage *m_imagen;
    //es el objeto painter
    QPainter *m_painter;
    //ptcero es el punto del comienzo es decir el punto inivial
    QPoint m_ptcero;
    //ptuno es el punto final, ya que se empieza desde cero hasta uno
    //por ende el inicial es ptcero y el final es ptuno
    QPoint m_ptuno;
    //es lavariable para que le otorgue color
    QColor m_apari;
    QPen pincel;
    //variable entera de ancho
    int m_anch;
    //varibale para elegir las opciones de figuras que el usuario elija
    int m_opc;
    bool m_toogle = false;
};
#endif // PRINCIPAL_H
