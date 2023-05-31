add_library(ScrabbleCalculator SHARED
        src/scrabble-calculator.cpp)

target_include_directories (ScrabbleCalculator PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)

add_subdirectory(ut)
