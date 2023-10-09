
include_directories(../include)

add_executable(test_funcs test_functions.c)

add_test(NAME function_test COMMAND test_funcs)

set_tests_properties(function_test PROPERTIES WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR})