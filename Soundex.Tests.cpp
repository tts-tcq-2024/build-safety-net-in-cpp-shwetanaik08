#include <gtest/gtest.h>
#include "Soundex.h"

// Test for empty string
TEST(SoundexTest, HandlesEmptyString) {
    EXPECT_EQ(generateSoundex(""), "");
}

// Test for single character
TEST(SoundexTest, HandlesSingleCharacter) {
    EXPECT_EQ(generateSoundex("A"), "A000");
}

// Test for basic Soundex encoding
TEST(SoundexTest, HandlesBasicEncoding) {
    EXPECT_EQ(generateSoundex("Bob"), "B100");
    EXPECT_EQ(generateSoundex("Tom"), "T500");
    EXPECT_EQ(generateSoundex("Sam"), "S500");
}

// Test for names with adjacent duplicate Soundex codes
TEST(SoundexTest, HandlesAdjacentDuplicates) {
    EXPECT_EQ(generateSoundex("Lisa"), "L200");
    EXPECT_EQ(generateSoundex("Susan"), "S250");
}

// Test for names with varying lengths
TEST(SoundexTest, HandlesVaryingLengths) {
    EXPECT_EQ(generateSoundex("Ann"), "A500");
    EXPECT_EQ(generateSoundex("Lee"), "L000");
    EXPECT_EQ(generateSoundex("Tim"), "T500");
    EXPECT_EQ(generateSoundex("Mary"), "M600");
}

// Test for names with different cases
TEST(SoundexTest, HandlesDifferentCases) {
    EXPECT_EQ(generateSoundex("Tom"), generateSoundex("tom"));
    EXPECT_EQ(generateSoundex("Lee"), generateSoundex("LEE"));
}

// Test for names with non-alphabet characters
TEST(SoundexTest, HandlesNonAlphabetCharacters) {
    EXPECT_EQ(generateSoundex("O'Leary"), "O460");
    EXPECT_EQ(generateSoundex("D'Souza"), "D200");
}
