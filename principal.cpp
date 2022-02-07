#include "principal.h"
#include "ui_principal.h"

Principal::Principal(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Principal)
    //en estos metodos instancio los objetos imagen y painter
{
    ui->setupUi(this);
    m_imagen = new QImage(this->size(), QImage::Format_ARGB32_Premultiplied);
    m_imagen->fill(Qt::white);
    m_painter = new QPainter(m_imagen);
    m_apari = Qt::black;
    m_anch = DEFAULT_ANCHO;

}

Principal::~Principal()
{
    delete ui;
}

//creo un painter topico
/**
 * llamar al evento y aceptar me sirve basicamente para que la opcion se acepte de manera correcta
 * y en cuanto a update vuelve a dibujar en la interfaz de usario
 */

void Principal::paintEvent(QPaintEvent *event)
{
    QPainter painter (this);
    painter.drawImage(0,0, *m_imagen);
    event->accept();

}

//todas estas condiciones empleadas sirven para elegir cuando el usuario escoja las cuatro
//opciones que en este caso son; estilo libre, lineas, rectangulos y por ultimos los ciruclos..

void Principal::mousePressEvent(QMouseEvent *event)
{
    if(m_opc == 1){
        m_ptcero = event->pos();
    }else if (m_opc == 2){
        if (m_toogle){
            m_ptcero = event->pos();
        }else {
            m_ptuno = event->pos();
            QPen pincel;
            pincel.setColor(m_apari);
            pincel.setWidth(m_anch);
            m_painter->setPen(pincel);
            m_painter->drawLine(m_ptcero, m_ptuno);
            update();
        }
    }else if (m_opc == 3){
        if(m_toogle){
            m_ptcero = event->pos();
        }else{
            m_ptuno = event->pos();
            int ancho = m_ptuno.x() - m_ptcero.x();
            int alto = m_ptuno.y() - m_ptcero.y();
            QPen pincel;
            pincel.setColor(m_apari);
            pincel.setWidth(m_anch);
            m_painter->setPen(pincel);
            m_painter->drawRect(m_ptcero.x(), m_ptcero.y(), ancho, alto);
            update();
        }

    }else if(m_opc == 4){
        if (m_toogle){
            m_ptcero = event->pos();
        }else {
            m_ptuno = event->pos();
            QPen pincel;
            pincel.setColor(m_apari);
            pincel.setWidth(m_anch);
            QRectF circulo(m_ptcero, m_ptuno);
            m_painter->setPen(pincel);
            m_painter->drawEllipse(circulo);
            update();
        }
    }
    m_toogle = !m_toogle;
}

void Principal::mouseMoveEvent(QMouseEvent *event)
{
    if(m_opc == 1){
        m_ptuno = event->pos();
        QPen pincel;
        pincel.setColor(m_apari);
        pincel.setWidth(m_anch);
        m_painter->setPen(pincel);
        m_painter->drawLine(m_ptcero, m_ptuno);
    }
    update();
    m_ptcero = m_ptuno;
}

/**en esta funcion que no devuelve nada pero que contiene una accion para guardar
aqui creo un obj llamador Qdir para el directorio de la persona que emplee este programa
ademas se agregaal path del obj con el nombre que el usuario añada
**/
void Principal::on_actionGuardar_triggered()
{
    QDir directorio = QDir::home();
    // + "/Dibujo.png"
    QString pathArchivo = directorio.absolutePath();

    QString nombreArchivo = QFileDialog::getSaveFileName(
                this,tr("GUARDAR"),pathArchivo,"Imagenes (*.png)");
    if (!nombreArchivo.isEmpty()){
        if (m_imagen->save(nombreArchivo))
            QMessageBox::information(this,tr("Guardar."),tr("Guardado exitosamente en: ") + nombreArchivo);
        else
            QMessageBox::warning(this,tr("Guardar."),tr("ERROR, no se pudo guardar, intentalo de nuevo."));
    }
}

void Principal::on_actionNuevo_triggered(){
    m_imagen->fill(Qt::white);
    update();
}
void Principal::on_actionColor_triggered()
{
    m_apari = QColorDialog::getColor(m_apari, this, tr("COLORES DISPONIBLES"),QColorDialog::ColorDialogOptions());
}
void Principal::on_actionAncho_triggered(){
    m_anch = QInputDialog::getInt(this, tr("GROSOR"), tr("Ingresa el ancho de la forma: "), m_anch, 1, 200);
}
void Principal::on_actionSalir_triggered(){
    this->close();
}
void Principal::on_actionCircunferencia_triggered(){
    m_opc = 4;
}
void Principal::on_actionRectangulos_triggered(){
    m_opc = 3;
}
void Principal::on_actionLineas_triggered(){
    m_opc = 2;
}
void Principal::on_actionLibre_triggered(){
    m_opc = 1;
}


