# CMake for tests

# SomeClass
include_directories(${PROJECT_SOURCE_DIR}/src/main/cpp/someclass)
add_executable(someclass-test SomeClassHoldingIntTest.cpp)
target_link_libraries(someclass-test SomeClass)