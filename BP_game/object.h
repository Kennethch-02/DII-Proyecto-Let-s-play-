#ifndef OBJECT_H
#define OBJECT_H
#include <QGraphicsItem>
#include <QPointF>
#include <QSizeF>

class object : public QGraphicsItem
{
public:
    object(const QString filename, QGraphicsItem *parent = nullptr);
    void setPosition(QPointF pos);
    void setVelocity(QPointF vel);
    void setSize(QSizeF size);
    QPointF getPosition();
    QPointF getVelocity();
    QSizeF getSize();
    int fuerza;
protected:
    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option,
               QWidget *widget = 0);
private:
    QString Filename;
    QPointF Position; // Posicionx , Posicion y
    QPointF Velocity; // Velocidad x, Velocidad y
    QSizeF Size; // Ancho , Alt
};

#endif // OBJECT_H
