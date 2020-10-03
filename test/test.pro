include(gtest_dependency.pri)

TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG += thread
CONFIG -= qt

HEADERS += \
        tst_wrapper_test.h

SOURCES += \
        amazon_plugin_test.cpp \
        ebay_plugin_test.cpp \
        main.cpp \
        wrapper_static_test.cpp
