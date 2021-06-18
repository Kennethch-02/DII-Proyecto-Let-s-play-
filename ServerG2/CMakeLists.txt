cmake_minimum_required(VERSION 3.17)
project(Server)

set(CMAKE_CXX_STANDARD 14)

link_libraries(ws2_32)
add_executable(Server main.cpp Server.cpp Server.h Codex.cpp Codex.h Memory.cpp Memory.h)


set(BOOST_ROOT "C:/UNIVERSIDAD/Datos2_2021/Proyecto2/boost_1_76_0")
set(BOOSTROOT "C:/UNIVERSIDAD/Datos2_2021/Proyecto2/boost_1_76_0")
target_link_libraries(Server ws2_32)
FIND_PACKAGE(Boost)
IF (Boost_FOUND)
    INCLUDE_DIRECTORIES(${Boost_INCLUDE_DIR})
    ADD_DEFINITIONS( "-DHAS_BOOST" )
ENDIF()