#include "object.h"
#include <QPointF>
#include <QSizeF>
#include <QPainter>
/**
* \brief Clase Objeto que permite agregarlo como elemento grafico de la escena
* @param QGraphicsItem
*/
object::object(const QString filename, QGraphicsItem *parent)
    : QGraphicsItem(parent)
{
    Filename = filename;
}
void object::setPosition(QPointF pos)
{
    Position = pos;
}
void object::setVelocity(QPointF vel)
{
    Velocity = vel;
}
void object::setSize(QSizeF size)
{
    Size = size;
}
QPointF object::getPosition()
{
    return Position;
}
QPointF object::getVelocity()
{
    return Velocity;
}
QSizeF object::getSize()
{
    return Size;
}
QRectF object::boundingRect() const
{
    return QRectF(Position.x(), Position.y(), Size.width(), Size.height());
}
void object::paint(QPainter *painter, const QStyleOptionGraphicsItem *, QWidget *)
{
    painter->drawPixmap(Position.x(), Position.y(),
                        Size.width(), Size.height(),
                        QPixmap(Filename));

}
