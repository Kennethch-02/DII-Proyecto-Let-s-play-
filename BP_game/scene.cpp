#include "scene.h"


#define x 0.0
#define y 0.0
#define with 600.0
#define height 600.0

Scene::Scene(QObject *parent)
    :QGraphicsScene(x,y,with,height, parent)
{
    addRect(x, y, with, height, QPen(Qt::black));
    img = new object(":balon.png");
    img->setPosition(QPointF(0.0,0.0));
    img->setVelocity(QPointF(1.0,1.0));
    img->setSize(QSizeF(20.0,20.0));
    addItem(img);
}

void Scene::Update()
{
    QPointF vel = img->getVelocity();
    img->moveBy(vel.rx(),vel.ry());
    update();
}
