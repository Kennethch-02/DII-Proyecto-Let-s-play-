#include "scene.h"
#include <qdebug.h>
#define px 0.0
#define py 0.0
#define with 776.0
#define height 431.25

Scene::Scene(QObject *parent)
    :QGraphicsScene(px,py,with,height, parent)
{
    drawRect(px, py, with, height, QPen(Qt::black));
    addItem(img_ball);
}

void Scene::drawRect(double Px, double Py, double w, double h, QPen color)
{
    addRect(Px, Py, w, h, color);
}

void Scene::drawBall(double Px, double Py, double w, double h, double v)
{
    img_ball->setPosition(QPointF(Px,Py));
    img_ball->setVelocity(QPointF(v,v));
    img_ball->setSize(QSizeF(w,h));
}

void Scene::init_direction()
{
    if(direccion == "U"){
        vx = 0.0;
        vy = -85.0;
    }else if(direccion == "D"){
        vx = 0.0;
        vy = 85.0;
    }else if(direccion == "R"){
        vx = 85.0;
        vy = 0.0;
    }else if(direccion == "L"){
        vx = -85.0;
        vy = 0.0;
    }else if(direccion == "U/R"){
        vx = 85.0;
        vy = -85.0;
    }else if(direccion == "U/L"){
        vx = -85.0;
        vy = -85.0;
    }else if(direccion == "D/R"){
        vx = 85.0;
        vy = 85.0;
    }else if(direccion == "D/L"){
        vx = -85.0;
        vy = 85.0;
    }
}
void Scene::Update()
{
    if(shoot){
        QPointF pos = img_ball->getPosition();
        double x = pos.x();
        double y = pos.y();
        if (img_ball->fuerza > 0){
            if(vx>0 and vy>0){
                if(matrix[int(Ball_pos.x()+1)][int(Ball_pos.y()+1)] == 1){
                    vy = -vy;
                    vx = -vx;
                }
            }else if(vx<0 and vy>0){
                if(matrix[int(Ball_pos.x()+1)][int(Ball_pos.y()-1)] == 1){
                    vy = -vy;
                    vx = -vx;
                }
            }else if(vx>0 and vy<0){
                if(matrix[int(Ball_pos.x()-1)][int(Ball_pos.y()+1)] == 1){
                    vy = -vy;
                    vx = -vx;
                }
            }else if(vx==0 and vy<0){
                if(matrix[int(Ball_pos.x()-1)][int(Ball_pos.y())] == 1){
                    vy = -vy;
                    vx = -vx;
                }
            }else if(vx==0 and vy>0){
                if(matrix[int(Ball_pos.x()+1)][int(Ball_pos.y())] == 1){
                    vy = -vy;
                    vx = -vx;
                }
            }else if(vx<0 and vy==0){
                if(matrix[int(Ball_pos.x())][int(Ball_pos.y()-1)] == 1){
                    vy = -vy;
                    vx = -vx;
                }
            }else if(vx>0 and vy==0){
                if(matrix[int(Ball_pos.x())][int(Ball_pos.y()+1)] == 1){
                    vy = -vy;
                    vx = -vx;
                }
            }
            if((x+vx)<0 or (x+vx)>765.0){
                vx = -vx;
            }
            if((y+vy)<0 or (y+vy)>425.0){
                vy = -vy;
            }
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
            img_ball->setPosition(QPointF(x,y));
            img_ball->fuerza--;
        }else{
            qDebug()<<int(Ball_pos.x())<<int(Ball_pos.y());
            shoot = false;
        }

    }

    update();
}
