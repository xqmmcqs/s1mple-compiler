cmake_minimum_required(VERSION 3.15)

project(s1mple-compiler)

set(CMAKE_CXX_STANDARD 14)

set(CMAKE_CXX_COMPILER clang++)
add_compile_options(-fexceptions)

link_libraries()
execute_process(COMMAND llvm-config --libs OUTPUT_VARIABLE LIBS)
execute_process(COMMAND llvm-config --system-libs OUTPUT_VARIABLE SYS_LIBS)
execute_process(COMMAND llvm-config --ldflags OUTPUT_VARIABLE LDF)

string(STRIP "${LIBS}" LIBS)
string(STRIP "${SYS_LIBS}" SYS_LIBS)
string(STRIP "${LDF}" LDF)

link_libraries(${LIBS} ${SYS_LIBS} ${LDF})

execute_process(COMMAND llvm-config --cxxflags OUTPUT_VARIABLE CMAKE_CXX_FLAGS)
string(STRIP "${CMAKE_CXX_FLAGS}" CMAKE_CXX_FLAGS)

file(GLOB SOURCES "src/*.cpp" "src/runtime/*.cpp" "src/logic/*.cpp" "src/exceptions/*.cpp" "src/builtin/*.cpp")

add_executable(${PROJECT_NAME} ${SOURCES})

target_include_directories(${PROJECT_NAME}
    PUBLIC
        /usr/local/include/antlr4-runtime
)

target_link_libraries(${PROJECT_NAME}
    /usr/local/lib/libantlr4-runtime.a
)