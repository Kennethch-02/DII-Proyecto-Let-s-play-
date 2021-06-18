#include "scene.h"
#include <qdebug.h>
#define px 0.0
#define py 0.0
#define with 776.0
#define height 431.25
/**
* \brief Aplicacion grafica que muestra en la aplicacion principal de juega la seccion de la
* cancha y las animaciones respectivas.
* @param QGraphicsScene
*/
Scene::Scene(QObject *parent)
    :QGraphicsScene(px,py,with,height, parent)
{
    drawRect(px, py, with, height, QPen(Qt::black));
    addItem(img_ball);
}
/**
* \brief Dibuja en ractallaun rectango segun las medidas especificadas.
* @param QRect
*/
void Scene::drawRect(double Px, double Py, double w, double h, QPen color)
{
    QGraphicsRectItem *a = addRect(Px, Py, w, h, color);
}
/**
* \brief Aplicacion grafica del servidor, genera el apartado visiual e
* interactivo necesario para cumplir con sus funciones
* @param QGraphicsScene
*/
void Scene::drawBall(double Px, double Py, double w, double h, double v)
{
    img_ball->setPosition(QPointF(Px,Py));
    img_ball->setVelocity(QPointF(v,v));
    img_ball->setSize(QSizeF(w,h));
}
/**
* \brief Metodo que calcula los valores iniciales de la direccion, segun lo elegido
* por el usuario.
*/
void Scene::init_direction()
{
    if(direccion == "U"){
        vx = 0.0;
        vy = -85.0;
        dx = 0;
        dy = -1;
    }else if(direccion == "D"){
        vx = 0.0;
        vy = 85.0;
        dx = 0;
        dy = 1;
    }else if(direccion == "R"){
        vx = 85.0;
        vy = 0.0;
        dx = 1;
        dy = 0;
    }else if(direccion == "L"){
        vx = -85.0;
        vy = 0.0;
        dx = -1;
        dy = 0;
    }else if(direccion == "U/R"){
        vx = 85.0;
        vy = -85.0;
        dx = 1;
        dy = -1;
    }else if(direccion == "U/L"){
        vx = -85.0;
        vy = -85.0;
        dx = -1;
        dy = -1;
    }else if(direccion == "D/R"){
        vx = 85.0;
        vy = 85.0;
        dx = 1;
        dy = 1;
    }else if(direccion == "D/L"){
        vx = -85.0;
        vy = 85.0;
        dx = -1;
        dy = 1;
    }
}

void Scene::Clean()
{

}

/**
* \brief Metodo conectado a la señal del Thread, que realiza la actualiazaciòn de la pantalla
*/
void Scene::Update()
{
    if(shoot){
        QPointF pos = img_ball->getPosition();
        double x = pos.x();
        double y = pos.y();
        if (img_ball->fuerza > 0){
            if((x+vx)<0 or (x+vx)>765.0){
                vx = -vx;
                dx =  -dx;
            }
            if((y+vy)<0 or (y+vy)>425.0){
                vy = -vy;
                dy =  -dy;
            }
            if(matrix[int(Ball_pos.x()+(1*dy))][int(Ball_pos.y()+(1*dx))] == 1){
                if(matrix[int(Ball_pos.x()+(1*(dy*-1)))][int(Ball_pos.y()+(1*(dx*-1)))] == 1){
                    move = false;
                }else{
                    move = true;
                    vy = -vy;
                    vx = -vx;
                    dx =  -dx;
                    dy =  -dy;
                }
            }else{
                move = true;
            }
            if(move){
                if(vx>0.0){
                    Ball_pos.setY(Ball_pos.y()+1);
                }else if(vx<0){
                    Ball_pos.setY(Ball_pos.y()-1);
                }
                if (vy>0){
                    Ball_pos.setX(Ball_pos.x()+1);
                }else if(vy<0){
                    Ball_pos.setX(Ball_pos.x()-1);
                }
                x+=vx;
                y+=vy;
                move = false;
            }
            img_ball->setPosition(QPointF(x,y));
            img_ball->fuerza--;
        }else{
            qDebug()<<int(Ball_pos.x())<<int(Ball_pos.y());
            shoot = false;
            if(matrix[int(Ball_pos.x())][int(Ball_pos.y())] == 4){
                J1++;
                img_ball->setPosition(QPointF(c_x,c_y));
                Ball_pos.setX(2);
                Ball_pos.setY(4);
            }
            if(matrix[int(Ball_pos.x())][int(Ball_pos.y())] == 3){
                J2++;
                img_ball->setPosition(QPointF(c_x,c_y));
                Ball_pos.setX(2);
                Ball_pos.setY(4);
            }
        }
    }
    update();
}
