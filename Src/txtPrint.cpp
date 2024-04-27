// txtPrint.cpp

#include <iostream> // For std::cerr
#include <stdexcept> // For std::runtime_error

void InitPrinting() {
    // Initialize printing
    if (!StartDoc()) {
        // Print error message if failed to start printing document
        std::cerr << "InitPrinting: StartDoc FAILED" << std::endl;
    }
}

void StartPage() {
    // Start a new page
    if (!StartPage()) {
        // Print error message if failed to start a new page
        std::cerr << "InitPrinting: StartPage FAILED" << std::endl;
    }
}

void layoutAndPrintBuffer() {
    // Layout and print buffer
    if (!EndPage()) {
        // Print error message if failed to end the page
        std::cerr << "layoutAndPrintBuffer: EndPage FAILED" << std::endl;
    }
    if (!StartPage()) {
        // Print error message if failed to start a new page
        std::cerr << "layoutAndPrintBuffer: StartPage FAILED" << std::endl;
    }
}

std::string getNextWordWithSpaceAfter(const std::string& word, int maxLength) {
    // Get next word with space after
    if (word.length() > maxLength) {
        // Print error message if the word is longer than maxLength
        std::cerr << "getNextWordWithSpaceAfter: Word '" << word << "' longer than " << maxLength << " found." << std::endl;
    }
    return word;
}
