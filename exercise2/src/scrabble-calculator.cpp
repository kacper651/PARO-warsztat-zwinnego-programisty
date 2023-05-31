#include "scrabble-calculator.hpp"
#include <string>
#include <unordered_map>

std::unordered_map<char, int> letters = {
    {'A', 1}, {'E', 1}, {'I', 1}, {'O', 1}, {'U', 1}, {'L', 1}, {'N', 1}, {'R', 1}, {'S', 1}, {'T', 1},
    {'D', 2}, {'G', 2},
    {'B', 3}, {'C', 3}, {'M', 3}, {'P', 3},
    {'F', 4}, {'H', 4}, {'V', 4}, {'W', 4}, {'Y', 4},
    {'K', 5},
    {'J', 8}, {'X', 8},
    {'Q', 10}, {'Z', 10}
};

int calculate(std::string word) {
    int score = 0;

    for (char letter : word) {
        letter = std::toupper(letter);

        if (letters.count(letter) > 0) {
            score += letters[letter];
        }
    }
    return score;
}
