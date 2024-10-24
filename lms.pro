QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    bookfragment.cpp \
    categoryfragment.cpp \
    dashboardfragment.cpp \
    databaseconnector.cpp \
    insightframe.cpp \
    loginpage.cpp \
    main.cpp \
    mainwindow.cpp \
    publicationfragment.cpp

HEADERS += \
    bookfragment.h \
    categoryfragment.h \
    dashboardfragment.h \
    databaseconnector.h \
    insightframe.h \
    loginpage.h \
    mainwindow.h \
    publicationfragment.h

FORMS += \
    bookform.ui \
    categoryform.ui \
    dashboardform.ui \
    insightframe.ui \
    loginpage.ui \
    mainwindow.ui \
    publicationform.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    resource.qrc \
    resource2.qrc
