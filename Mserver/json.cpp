#include "json.h"
#include "QTextStream"
#include "QString"
#include "QJsonDocument"
#include "QJsonArray"
#include "QJsonObject"
/**
* \brief Json con la capacidad de enviar mensajes interpretador
* mediante la clase Message para la comunicacion cliente-servidor.
* @param QJsonObject
*/
json::json()
{

}
QJsonObject json::Parse(message Message){
    QJsonObject Json = *new QJsonObject();
    Json.insert("Type", QJsonValue::fromVariant(Message.type));
    Json.insert("Action", QJsonValue::fromVariant(Message.action));
    Json.insert("Data", QJsonValue::fromVariant(Message.data));
    return Json;
}
message json::getClass(QString str){
    message Message;
    QJsonObject json_object;
    QJsonDocument json_recive = QJsonDocument::fromJson(str.toLatin1());
    QJsonArray jsonArray = json_recive.array();
    if(!jsonArray.isEmpty()){
        QJsonObject json_object = jsonArray.first().toObject();
        QJsonValue type = json_object["Type"];
        QJsonValue action = json_object["Action"];
        QJsonValue data = json_object["Data"];
        Message.setType(type.toString());
        Message.setAction(action.toString());
        Message.setData(data.toString());
    }
    return Message;
}
