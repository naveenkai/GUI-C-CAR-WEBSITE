QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    elecrticcar.cpp \
    electriccar3.cpp \
    electriccar4.cpp \
    fuelcar.cpp \
    fuelcar3.cpp \
    fuelcar4.cpp \
    main.cpp \
    mainwindow.cpp \
    mmm.cpp \
    nextele.cpp \
    nextfuel.cpp \
    redirct1.cpp \
    redirct2.cpp \
    tqfeed.cpp

HEADERS += \
    elecrticcar.h \
    electriccar3.h \
    electriccar4.h \
    fuelcar.h \
    fuelcar3.h \
    fuelcar4.h \
    mainwindow.h \
    mmm.h \
    nextele.h \
    nextfuel.h \
    redirct1.h \
    redirct2.h \
    tqfeed.h

FORMS += \
    elecrticcar.ui \
    electriccar3.ui \
    electriccar4.ui \
    fuelcar.ui \
    fuelcar3.ui \
    fuelcar4.ui \
    mainwindow.ui \
    mmm.ui \
    nextele.ui \
    nextfuel.ui \
    redirct1.ui \
    redirct2.ui \
    tqfeed.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    imageresource.qrc

DISTFILES +=
