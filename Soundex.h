#ifndef SOUNDEX_H
#define SOUNDEX_H

#include <string>

// Function to get Soundex code for a character
char getSoundexCode(char c);

// Function to remove adjacent duplicates
std::string removeAdjacentDuplicates(const std::string& str);

// Function to pad the string to a length of 4
std::string padToLength(const std::string& str, size_t length);

std::string generateSoundex(const std::string& name);

#endif // SOUNDEX_H
