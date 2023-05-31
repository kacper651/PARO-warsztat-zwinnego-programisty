add_executable(ScrabbleTests
        scrabble-tests.cpp)

target_link_libraries(ScrabbleTests PUBLIC ScrabbleCalculator gtest_main)

add_test(NAME ScrabbleTests
    COMMAND ScrabbleTests --gtest_output=xml:${CMAKE_BINARY_DIR}/junit/exercise1.junit.xml)