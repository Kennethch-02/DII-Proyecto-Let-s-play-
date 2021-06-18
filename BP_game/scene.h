#ifndef SCENE_H
#define SCENE_H

#include <QGraphicsScene>
#include "object.h"
#include "gameover.h"
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
    QGraphicsItemGroup group;
    void Clean();
    int J1 = 0;
    int J2 = 0;
    double c_x;
    double c_y;
public slots:
    void Update();
private:
    double vx;
    double vy;
    int dx;
    int dy;
    bool move;
};
#endif // SCENE_H
