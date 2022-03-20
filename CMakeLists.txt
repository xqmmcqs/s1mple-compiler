cmake_minimum_required(VERSION 3.15)

project(s1mple-compiler)

set(CMAKE_CXX_STANDARD 14)

find_package(LLVM REQUIRED CONFIG)

message(STATUS "Found LLVM ${LLVM_PACKAGE_VERSION}")
message(STATUS "Using LLVMConfig.cmake in: ${LLVM_DIR}")

include_directories(${LLVM_INCLUDE_DIRS})
separate_arguments(LLVM_DEFINITIONS_LIST NATIVE_COMMAND ${LLVM_DEFINITIONS})
add_definitions(${LLVM_DEFINITIONS_LIST})

file(GLOB SOURCES "src/*.cpp" "src/runtime/*.cpp")

add_executable(${PROJECT_NAME} ${SOURCES})

llvm_map_components_to_libnames(llvm_libs support core irreader)

target_include_directories(${PROJECT_NAME}
    PRIVATE
        /usr/local/include/antlr4-runtime
)

target_link_libraries(${PROJECT_NAME}
    PRIVATE
        /usr/local/lib/libantlr4-runtime.a
        ${llvm_libs}
)