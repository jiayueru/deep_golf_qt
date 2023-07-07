QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    dialog.cpp \
    game2048.cpp \
    main.cpp \
    mainwindow.cpp \
    mywindow.cpp \
    running.cpp \
    scene1.cpp \
    scene2.cpp

HEADERS += \
    dialog.h \
    game2048.h \
    mainwindow.h \
    mywindow.h \
    running.h \
    scene1.h \
    scene2.h

FORMS += \
    game2048.ui \
    mainwindow.ui \
    mywindow.ui \
    running.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    BG_images/BG1.jpg \
    bg1.png \
    images/run0.png

RESOURCES += \
    images.qrc
