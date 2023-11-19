#include <iostream>
#include <string>
#include <cstring> // Include the C string header
#include <cstdlib> // Include the C standard library header
#include <ctime>   // Include the C time header

#ifdef _WIN32
#include <Windows.h>
#else
#include <unistd.h>
#endif

using namespace std;

int performMathOperation(int a, int b) {
    return (a * 2) + (b / 2);
}

void dummyFunction() {
    int result = performMathOperation(10, 20);
    int result2 = performMathOperation(result, result * 2);
}

const char* generatePassword() {
    static const char part1[] = "ilike";
    static const char part2[] = "hotdogs";

    // Concatenate the string literals
    std::string concatenatedPassword = part1;
    concatenatedPassword += part2;

    // Dynamically allocate memory for the password
    char* password = new char[concatenatedPassword.size() + 1];

    // Copy the concatenated password to the dynamically allocated memory
    strcpy_s(password, concatenatedPassword.size() + 1, concatenatedPassword.c_str());

    return password;
}

void goSleep() {
    Sleep(2000);
}

int main() {
    dummyFunction();
    const char* xYz = generatePassword();
    char aBc[256];

    while (true) {
        std::cout << "Enter the password: ";
        std::cin >> aBc;

        if (std::strcmp(aBc, xYz) == 0) {
            std::cout << "Congratulations! You've cracked the password.\n";
            goSleep();
            break;
        }
        else {
            std::cout << "Incorrect password. Try again.\n";
        }
    }

    return 0;
}
