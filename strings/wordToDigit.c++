#include <iostream>
#include <map>
#include <sstream>

std::string wordToDigit(const std::string& s)
{
    // Create a map to store word-to-digit mappings
    std::map<std::string, std::string> numberMap;
    numberMap["zero"] = "0";
    numberMap["one"] = "1";
    numberMap["two"] = "2";
    numberMap["three"] = "3";
    numberMap["four"] = "4";
    numberMap["five"] = "5";
    numberMap["six"] = "6";
    numberMap["seven"] = "7";
    numberMap["eight"] = "8";
    numberMap["nine"] = "9";

    // Create a stream to tokenize the input string
    std::istringstream iss(s);

    std::string word, result, prevWord;
    while (iss >> word) {
        // Lookup the word in the numberMap
        auto it = numberMap.find(word);
        if (it != numberMap.end()) {

            if (prevWord == "double")
            {
                for (int i = 1; i < 2; i++) {
                    result += it->second;
                }
            }
            else if (prevWord == "triple") {
                for (int i = 1; i < 3; i++) {
                    result += it->second;
                }
            }

            // Append the corresponding digit to the result
            result += it->second;
            prevWord = "";
        }
        else {
            prevWord = word;
        }

    }

    return result;
}

std::string wordToNumber(std::string s) {
    return wordToDigit(s);
}

int main() {

    std::string input = "double nine zero five three zero double eight four five";
    std::string output = wordToNumber(input);
    std::cout << output << std::endl;

    return 0;
}
