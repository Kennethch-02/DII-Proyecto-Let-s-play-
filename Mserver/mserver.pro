QT       += core gui
QT += gui
QT       += network
QT += widgets
Qt += core

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    client.cpp \
    dialog.cpp \
    json.cpp \
    main.cpp \
    memorymanager.cpp \
    message.cpp \
    mserver.cpp \
    server.cpp

HEADERS += \
    client.h \
    dialog.h \
    json.h \
    memorymanager.h \
    message.h \
    mserver.h \
    server.h

FORMS += \
    dialog.ui \
    mserver.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
