QT       += core gui
QT += sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    source\database.cpp \
    source\delete_employee.cpp \
    source\main.cpp \
    source\employee.cpp \
    source\update_employee.cpp \
    source\view_employee.cpp

HEADERS += \
    header\database.h \
    header\delete_employee.h \
    header\employee.h \
    header\update_employee.h \
    header\view_employee.h

FORMS += \
    form\delete_employee.ui \
    form\employee.ui \
    form\update_employee.ui \
    form\view_employee.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target


contains(ANDROID_TARGET_ARCH,armeabi-v7a) {
    ANDROID_PACKAGE_SOURCE_DIR = \
        $$PWD/android
        deployment.files += employee.db
        deployment.path = /assets/db
        INSTALLS += deployment
}
