cmake_minimum_required(VERSION 3.14)

set(CMAKE_CXX_STANDARD 11)
add_subdirectory(./lib/googletest)
set(gtest_SOURCE_DIR, ./lib/googletest)
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR} ../)

set(TEST_SOURCE_FILES runAllTests.cpp KnightTest.cpp MarksmanTest.cpp WizardTest.cpp SkeletonTest.cpp RangedSkeletonTest.cpp
        OgreTest.cpp DrakeTest.cpp)
add_executable(runAllTests ${TEST_SOURCE_FILES})
target_link_libraries(runAllTests gtest gtest_main core)
