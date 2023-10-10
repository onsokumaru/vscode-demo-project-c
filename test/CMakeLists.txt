include_directories(../include)
# include_directories(../src)

add_executable(test_funcs test_functions.c)
# add_executable(math_funcs test_my_math.c unity.c)

# target_include_directories(math_funcs PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/../include)


add_test(NAME function_test COMMAND test_funcs)
# add_test(NAME math_test COMMAND math_funcs)

set_tests_properties(function_test PROPERTIES WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR})
# set_tests_properties(math_test PROPERTIES WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR})