add_library(SomeClass someclass/SomeClassHoldingInt.h someclass/SomeClassHoldingInt.cpp)

add_executable(audio_starter main.cpp)
target_link_libraries(audio_starter SomeClass)