#ifndef JSON_H
#define JSON_H
#include <QJsonObject>
#include <QJsonArray>
#include "message.h"

using namespace std;
class json
{
public:
    json();
    QJsonObject Parse(message Message);
    message getClass(QString str);
};

#endif // JSON_H
