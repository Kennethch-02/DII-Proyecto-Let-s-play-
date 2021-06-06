#include "scene.h"


#define x 0.0
#define y 0.0
#define with 690.0
#define height 431.25

Scene::Scene(QObject *parent)
    :QGraphicsScene(x,y,with,height, parent)
{
    drawRect(x, y, with, height, QPen(Qt::black));

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
    addItem(img_ball);
}
void Scene::Update()
{
    QPointF vel = img->getVelocity();
    img->moveBy(vel.rx(),vel.ry());
    update();
}
