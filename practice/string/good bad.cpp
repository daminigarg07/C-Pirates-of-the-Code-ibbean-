#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>

using namespace std;

// Helper function to check if a character is a vowel
bool isVowel(char c) {
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}

// Function to classify the string
string classifyString(string S) {
    int n = S.size();
    
    for (int i = 0; i < n; ++i) {
        int maxConsonants = 0;
        int maxVowels = 0;
        int consonants = 0;
        int vowels = 0;

        for (int j = i; j < n; ++j) {
            if (S[j] == '?') {
                consonants++;
                vowels++;
            } else if (isVowel(S[j])) {
                consonants = 0;
                vowels++;
            } else {
                vowels = 0;
                consonants++;
            }
            
            maxConsonants = max(maxConsonants, consonants);
            maxVowels = max(maxVowels, vowels);
            
            if (maxConsonants > 3 || maxVowels > 5) {
                return "BAD";
            }
        }
    }
    
    return "GOOD";
}

// Main function to test the classifyString function
int main() {
    string S;
    cout << "Enter the string: ";
    cin >> S;

    string result = classifyString(S);
    cout << "The string is classified as: " << result << endl;

    return 0;
}
