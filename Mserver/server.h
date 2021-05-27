#ifndef SERVER_H
#define SERVER_H
#include <QTcpServer>
#include "message.h"
#include "json.h"
#include <QJsonDocument>
#include <QMap>
#include "memorymanager.h"
class client;
class server : public QTcpServer
{
    Q_OBJECT
public:
    server(QObject *parent = nullptr);
    bool startServer(quint16 port);
    int memory;
    MemoryManager Memory;
    QString CMD;
protected:
    void incomingConnection(qintptr handle);
signals:
    void CMDChange(QString a);
private:    
    void Send_Message();
    void Do_Action();
    QMap<QString,int*> dic_Datos;
    message Message;
    message Received_Message;
    json Json;
    QList<client *> mSockets;
};
#endif // SERVER_H
