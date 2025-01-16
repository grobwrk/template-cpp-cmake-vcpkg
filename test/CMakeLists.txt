enable_testing()

find_package(GTest CONFIG REQUIRED)

add_executable(main "hello_test.cpp")
target_link_libraries(main PUBLIC lib)

# Putting either GTest::gmock or GTest::gmock_main or both, broke tests
target_link_libraries(main PRIVATE GTest::gtest GTest::gtest_main)

include(GoogleTest)
gtest_discover_tests(main)
