#ifndef SCENE_H
#define SCENE_H

#include <QGraphicsScene>
#include "object.h"
class object;

class Scene : public QGraphicsScene
{
    Q_OBJECT
public:

    Scene(QObject *parent = nullptr);
    object *img_ball = new object(":balon.png");
    void drawRect(double Px, double Py, double w, double h,
                  QPen color);
    void drawBall(double Px, double Py, double w, double h,
                  double v);
public slots:
    void Update();
private:
};
#endif // SCENE_H
