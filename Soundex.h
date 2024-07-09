#ifndef SOUNDEX_H
#define SOUNDEX_H

#include <string>

char getSoundexCode(char c);
std::string accumulateSoundexCodes(const std::string& name);
std::string padSoundex(const std::string& soundex);
std::string generateSoundex(const std::string& name);

#endif // SOUNDEX_H
