#include <iostream>

int main() {
    std::cout << "-- basic array declaration --\n";
    int numbers[3]{1, 2, 3};
    std::cout << "Index 0: " << numbers[0] * 10 << std::endl;
    std::cout << "Index 1: " << numbers[1] * 20 << std::endl;
    std::cout << "Index 2: " << numbers[2] * 30 << std::endl;

    // array count figured out based on intializer
    char vowels[]{'a', 'e', 'i', 'o', 'u'};
    std::cout << "-- vowels --\n";
    std::cout << "First vowel: " << vowels[0] << std::endl;
    std::cout << "Last vowel: " << vowels[4] << std::endl;

    // bad init
    std::cout << "-- wrong init --\n";
    int bad_init[2];
    std::cout << bad_init[0] << std::endl;
    std::cout << bad_init[1] << std::endl;

    // good init
    std::cout << "-- correct init --\n";
    int good_init[2]{};
    std::cout << good_init[0] << std::endl;
    std::cout << good_init[1] << std::endl;

    // read from command line to update array
    int test_scores[5]{};
    std::cout << "Enter 5 test scores (0 - 100): ";
    std::cin >> test_scores[0];
    std::cin >> test_scores[1];
    std::cin >> test_scores[2];
    std::cin >> test_scores[3];
    std::cin >> test_scores[4];

    for (int i = 0; i < 5; i++) {
        std::cout << "Test score " << i + 1 << ": " << test_scores[i] << std::endl;
    }
}