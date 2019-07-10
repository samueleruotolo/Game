cmake_minimum_required(VERSION 3.14)
project(Game)

set(CMAKE_CXX_STANDARD 11)

# including subdirectory for Googletest
add_subdirectory(unit_test)

# including SFML
set(SFML_INCLUDE_DIR "SFML/include")
set(SFML_LIBRARY_DIR "SFML/lib")
set(SFML_DIR "SFML/lib/cmake/SFML")

link_directories(SFML_LIBRARY_DIR)
include_directories(SFML_INCLUDE_DIR)

find_package(SFML 2.5.1 COMPONENTS system window graphics network audio REQUIRED)

if(SFML_FOUND)
    message(STATUS "SFML_INCLUDE_DIR: ${SFML_INCLUDE_DIR}")
    message(STATUS "SFML_LIBRARIES: ${SFML_LIBRARIES}")
    message(STATUS "SFML_VERSION: ${SFML_VERSION}")
endif()

set(SOURCE_FILES GameCharacter.cpp GameCharacter.h Hero.cpp Hero.h Chest.cpp Chest.h PowerUp.cpp PowerUp.h
        HealthImprovement.cpp HealthImprovement.h AttackImprovement.cpp AttackImprovement.h ArmorImprovement.cpp
        ArmorImprovement.h Knight.cpp Knight.h Wizard.cpp Wizard.h Marksman.cpp Marksman.h DefaultValues.h Boss.cpp
        Boss.h Drake.cpp Drake.h Ogre.cpp Ogre.h Game.cpp Game.h Projectile.cpp Projectile.h Skeleton.cpp Skeleton.h
        RangedSkeleton.cpp RangedSkeleton.h MeleeHero.cpp MeleeHero.h RangedHero.cpp RangedHero.h MeleeEnemy.cpp
        MeleeEnemy.h RangedEnemy.cpp RangedEnemy.h MeleeBoss.cpp MeleeBoss.h RangedBoss.cpp RangedBoss.h)

add_executable(Game main.cpp ${SOURCE_FILES})
add_library(core ${SOURCE_FILES})
target_link_libraries(Game sfml-graphics sfml-window sfml-system)
target_link_libraries(core sfml-graphics sfml-window sfml-system)