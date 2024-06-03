include_directories(inc)
file(GLOB sources ${sources} src/*.cpp)
add_executable(Test_Vector2D test/Test_Vector2D.cpp ${sources})