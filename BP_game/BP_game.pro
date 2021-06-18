QT       += core gui
QT       += network
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    bp_settings.cpp \
    gameover.cpp \
    main.cpp \
    bp_window.cpp \
    mainwindow.cpp \
    object.cpp \
    scene.cpp \
    thread.cpp

HEADERS += \
    bp_settings.h \
    bp_window.h \
    gameover.h \
    mainwindow.h \
    object.h \
    scene.h \
    thread.h

FORMS += \
    bp_settings.ui \
    bp_window.ui \
    gameover.ui \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    res.qrc
