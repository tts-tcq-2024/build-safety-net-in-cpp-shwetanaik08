#include <cctype>
#include <string>

// Function to get Soundex code for a character
char getSoundexCode(char c) {
    switch (toupper(c)) {
        case 'B': case 'F': case 'P': case 'V': return '1';
        case 'C': case 'G': case 'J': case 'K': case 'Q': case 'S': case 'X': case 'Z': return '2';
        case 'D': case 'T': return '3';
        case 'L': return '4';
        case 'M': case 'N': return '5';
        case 'R': return '6';
        default: return '0'; // For A, E, I, O, U, H, W, Y
    }
}

// Function to remove adjacent duplicates
std::string removeAdjacentDuplicates(const std::string& str) {
    if (str.empty()) return "";

    std::string result;
    result += str[0];

    for (size_t i = 1; i < str.size(); ++i) {
        if (str[i] != str[i - 1]) {
            result += str[i];
        }
    }

    return result;
}

// Function to pad the string to a length of 4
std::string padToLength(const std::string& str, size_t length) {
    std::string result = str;
    while (result.size() < length) {
        result += '0';
    }
    return result.substr(0, length);
}

// Function to generate Soundex code
std::string generateSoundex(const std::string& name) {
    if (name.empty()) return "";

    std::string soundex;
    soundex += toupper(name[0]);

    std::string codes;
    for (size_t i = 1; i < name.size(); ++i) {
        char code = getSoundexCode(name[i]);
        if (code != '0') {
            codes += code;
        }
    }

    codes = removeAdjacentDuplicates(codes);
    soundex += codes;

    return padToLength(soundex, 4);
}
