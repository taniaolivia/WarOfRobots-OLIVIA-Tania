TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        AverageState.cpp \
        DieState.cpp \
        Game.cpp \
        GoodState.cpp \
        Player.cpp \
        State.cpp \
        StrongState.cpp \
        WeakState.cpp \
        main.cpp

HEADERS += \
    AverageState.h \
    DieState.h \
    Game.h \
    GoodState.h \
    Player.h \
    State.h \
    StrongState.h \
    WeakState.h
