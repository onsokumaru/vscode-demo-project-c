include_directories(../include)
include_directories(../src)

include(CMakePrintHelpers)
set(TEST_FILE1 ${CMAKE_SOURCE_DIR}/src/my_math.c)
# cmake_print_variables(${TEST_FILES1})
# cmake_print_variables(${SOURCE_DIR})
# cmake_print_variables(${CMAKE_SOURCE_DIR})
# cmake_print_variables(${PROJECT_BINARY_DIR})
add_executable(test_funcs test_functions.c)
add_executable(math_funcs test_my_math.c unity.c ${TEST_FILE1})

# target_include_directories(math_funcs PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/../include)


add_test(NAME function_test COMMAND test_funcs)
add_test(NAME math_test COMMAND math_funcs)

set_tests_properties(function_test PROPERTIES WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR})
set_tests_properties(math_test PROPERTIES WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR})