QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    barrash.cpp \
    barrasv.cpp \
    main.cpp \
    laberinto.cpp \
    manejoarchivos.cpp \
    monedas.cpp \
    personaje.cpp

HEADERS += \
    barrash.h \
    barrasv.h \
    laberinto.h \
    manejoarchivos.h \
    monedas.h \
    personaje.h

FORMS += \
    laberinto.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    Objetos.qrc \
    Personajes.qrc

DISTFILES += \
    laberinto
