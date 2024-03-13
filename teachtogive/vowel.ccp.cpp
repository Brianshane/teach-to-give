#include <iostream>
#include <string>
#include <cctype>

int countVowels(const std::string& sentence) {
    int vowelCount = 0;
    for (char ch : sentence) {
        if (std::tolower(ch) == 'a' || std::tolower(ch) == 'e' || std::tolower(ch) == 'i' ||
            std::tolower(ch) == 'o' || std::tolower(ch) == 'u') {
            vowelCount++;
        }
    }
    return vowelCount;
}

int main() {
    std::string sentence;
    std::cout << "Enter a sentence: ";
    std::getline(std::cin, sentence);

    int numVowels = countVowels(sentence);
    std::cout << "Number of vowels in the sentence: " << numVowels << std::endl;

    return 0;
}
