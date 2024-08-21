#ifndef WORD_GUESS_CONSTANTS_HPP
#define WORD_GUESS_CONSTANTS_HPP
#include <string>

using namespace std;

// test cases given assume these values

constexpr int kMaxMisses = 5;
constexpr int kRandomSeed = 5500;
constexpr int kMinWordLength = 2;   // inclusive
constexpr int kMaxWordLength = 11;  // exclusive
const string kDictionaryFile = "includes/dictionary.txt";

#endif