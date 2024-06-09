include_directories(inc)
file(GLOB sources ${sources} src/*.cpp)
add_executable(Test_Vector3D test/Test_Vector3D.cpp ${sources})