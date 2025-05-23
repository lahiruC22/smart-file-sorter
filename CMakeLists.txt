cmake_minimum_required(VERSION 3.10)
project(AIFileCategorizerAgent)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_executable(${PROJECT_NAME} src/main.cpp src/Agent.cpp src/FileCategorizer.cpp)

# Include directories
target_include_directories(${PROJECT_NAME} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)

# Enable testing with CTest
enable_testing()

# Add the test executable
add_executable(runTests tests/test_agent.cpp src/FileCategorizer.cpp) # Link FileCategorizer.cpp

# Specify include directories for the test executable
target_include_directories(runTests PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)

# Add the test to CTest
add_test(NAME unit_tests COMMAND runTests)
