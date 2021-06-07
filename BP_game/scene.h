#ifndef SCENE_H
#define SCENE_H

#include <QGraphicsScene>
#include "object.h"
class object;

class Scene : public QGraphicsScene
{
    Q_OBJECT
public:
    int matrix[5][9] = {{0,0,0,0,0,0,0,0,0},
                        {0,0,0,0,0,0,0,0,0},
                        {3,0,0,0,2,0,0,0,4},
                        {0,0,0,0,0,0,0,0,0},
                        {0,0,0,0,0,0,0,0,0}};
    QPointF Ball_pos;
    Scene(QObject *parent = nullptr);
    object *img_ball = new object(":balon.png");
    void drawRect(double Px, double Py, double w, double h,
                  QPen color);
    void drawBall(double Px, double Py, double w, double h,
                  double v);
    void init_direction();
    bool shoot = false;
    QString direccion;
public slots:
    void Update();
private:
    double vx;
    double vy;
};
#endif // SCENE_H
