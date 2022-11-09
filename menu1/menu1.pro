QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    main.cpp \
    menu.cpp \
    menu2.cpp \
    menu3.cpp \
    menu4.cpp \
    menu5.cpp \
    menu6.cpp \
    menu7.cpp

HEADERS += \
    menu.h \
    menu2.h \
    menu3.h \
    menu4.h \
    menu5.h \
    menu6.h \
    menu7.h

FORMS += \
    menu.ui \
    menu2.ui \
    menu3.ui \
    menu4.ui \
    menu5.ui \
    menu6.ui \
    menu7.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
