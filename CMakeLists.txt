cmake_minimum_required(VERSION 3.14)
project(Game)

set(CMAKE_CXX_STANDARD 14)
set(SOURCE_FILES main.cpp GameCharacter.cpp GameCharacter.h Hero.cpp Hero.h Chest.cpp Chest.h PowerUp.cpp PowerUp.h
        HealthImprovement.cpp HealthImprovement.h AttackImprovement.cpp AttackImprovement.h ArmorImprovement.cpp
        ArmorImprovement.h)

add_subdirectory(unit_test)
add_executable(Game main.cpp)
add_library(core ${SOURCE_FILES})

target_link_libraries(Game core)

set(SFML_DIR "C:/Users/Principale/CLionProjects/C++/Game/SFML-2.5.1/lib/cmake/SFML")
find_package(SFML 2.5 COMPONENTS graphics audio REQUIRED)
target_link_libraries(Game sfml-graphics sfml-audio)