cmake_minimum_required(VERSION 3.14)

set(CMAKE_CXX_STANDARD 17)
set(TEST_SOURCE_FILES KnightTest.cpp MarksmanTest.cpp WizardTest.cpp SkeletonTest.cpp RangedSkeletonTest.cpp
        OgreTest.cpp DrakeTest.cpp)

add_subdirectory(./lib/googletest)
set(gtest_SOURCE_DIR, ./lib/googletest)
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

add_executable(test ${TEST_SOURCE_FILES})
target_link_libraries(test gtest gtest_main core)