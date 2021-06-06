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
public slots:
    void Update();
private:
    object *img;

};

#endif // SCENE_H
