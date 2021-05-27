#include "message.h"
using namespace std;

message::message()
{
}
void message::setType(QString type){
    this->type = type;
    this->is_empty = false;
}
void message::setAction(QString action){
    this->action = action;
    this->is_empty = false;
}
void message::setData(QString data){
    this->data = data;
    this->is_empty = false;
}
void message::clear(){
    this->type = "";
    this->data = "";
    this->action = "";
    this->is_empty = true;
}
bool message::isEmpty(){
    return this->is_empty;
}
