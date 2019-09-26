cmake_minimum_required(VERSION 3.14)
project(Pacman)

link_directories("C:/Program Files/MinGW/lib")

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -D FREEGLUT_STATIC")

add_executable(Pacman main.cpp control.cpp control.h
        createpacman.cpp createpacman.h food.cpp food.h
        gameover.cpp gameover.h gameresult.cpp gameresult.h
        init.cpp init.h labernth.cpp labernth.h Pacman.cpp
        Pacman.h gamestart.cpp gamestart.h monster.cpp monster.h main.h)

target_link_libraries(Pacman freeglut_static opengl32 winmm gdi32 glu32.lib)

