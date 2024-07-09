#ifndef SOUNDEX_H
#define SOUNDEX_H

#include <unordered_map>
#include <cctype>
#include <string>
#include <numeric>

//to soundex
char getSoundexCode(char c);

bool isHW(char c);
//appending
bool shouldAppend(char code, char prevCode, char currentChar);
//acumalate soundex function
std::string accumulateSoundexCodes(const std::string& name);
//padding
std::string padSoundex(const std::string& soundex);
//generating sound
std::string generateSoundex(const std::string& name);

#endif // SOUNDEX_H
