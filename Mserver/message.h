#ifndef MESSAGE_H
#define MESSAGE_H
#include <QTcpSocket>
#include "QString"

using namespace std;
class message
{
public:
    message();
    void setType(QString type);
    void setAction(QString action);
    void setData(QString data);
    void clear();
    bool isEmpty();
    QString type;
    QString action;
    QString data;
    bool is_empty;
};

#endif // MESSAGE_H
