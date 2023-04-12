cmake_minimum_required(VERSION 3.26)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

include(FetchContent)
FetchContent_Declare(
  Catch2
  GIT_REPOSITORY https://github.com/catchorg/Catch2.git
  GIT_TAG v3.3.2
)
FetchContent_MakeAvailable(Catch2)

project(Week1 LANGUAGES CXX)

set(FILES
    src/main.cpp
    src/fact.h
    src/fact.cpp
    src/fact_test.cpp
)

set(SRC ${FILES})
list(FILTER SRC EXCLUDE REGEX "_test\.cpp$")
add_executable(${PROJECT_NAME} ${SRC})

set(SRC_TESTS ${FILES})
list(REMOVE_ITEM SRC_TESTS src/main.cpp)
add_executable(tests ${SRC_TESTS})

target_link_libraries(tests PRIVATE Catch2::Catch2WithMain)

list(APPEND CMAKE_MODULE_PATH ${catch2_SOURCE_DIR}/extras)
include(CTest)
include(Catch)
catch_discover_tests(tests)