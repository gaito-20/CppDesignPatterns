project(test)
add_subdirectory(lib/google_test)

include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

add_executable(Google_Tests_run
        ObserverTests/ObserverTest.cpp
)

target_link_libraries(Google_Tests_run src)
target_link_libraries(Google_Tests_run gtest gtest_main)
