QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    addbookdialog.cpp \
    addcategorydialog.cpp \
    addpublicationdialog.cpp \
    bookfragment.cpp \
    bookissuefragment.cpp \
    categoryfragment.cpp \
    dashboardfragment.cpp \
    databaseconnector.cpp \
    insightframe.cpp \
    issuebookdialog.cpp \
    loginpage.cpp \
    main.cpp \
    mainwindow.cpp \
    publicationfragment.cpp \
    regstudfragment.cpp \
    reqbookfragment.cpp \
    src/deletebutton.cpp \
    src/editbutton.cpp \
    usermainwindow.cpp

HEADERS += \
    addbookdialog.h \
    addcategorydialog.h \
    addpublicationdialog.h \
    appdata.h \
    bookfragment.h \
    bookissuefragment.h \
    categoryfragment.h \
    dashboardfragment.h \
    databaseconnector.h \
    insightframe.h \
    issuebookdialog.h \
    loginpage.h \
    mainwindow.h \
    publicationfragment.h \
    regstudfragment.h \
    reqbookfragment.h \
    src/deletebutton.h \
    src/editbutton.h \
    usermainwindow.h

FORMS += \
    addbookdialog.ui \
    addcategorydialog.ui \
    addpublicationdialog.ui \
    backup1.ui \
    bookform.ui \
    bookissueform.ui \
    categoryform.ui \
    dashboardform.ui \
    insightframe.ui \
    issuebookdialog.ui \
    loginpage.ui \
    mainwindow.ui \
    publicationform.ui \
    regstudform.ui \
    reqbookform.ui \
    src/deletebutton.ui \
    src/editbutton.ui \
    usermainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    resource.qrc
