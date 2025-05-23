#include "FileCategorizer.h" // Assuming FileCategorizer.h is accessible
#include <iostream>
#include <string>
#include <cassert> // For assert

void testFileCategorization() {
    FileCategorizer categorizer;
    std::string result = categorizer.categorizeFile("dummy_file.txt");
    // For this basic test, we expect "Uncategorized"
    assert(result == "Uncategorized"); 
    std::cout << "testFileCategorization: PASSED" << std::endl;

    std::string errorResult = categorizer.categorizeFile("");
    assert(errorResult == "Error: Empty file path");
    std::cout << "testFileCategorization (empty path): PASSED" << std::endl;
}

int main() {
    testFileCategorization();
    std::cout << "All tests passed!" << std::endl;
    return 0;
}
