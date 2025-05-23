#ifndef FILE_CATEGORIZER_H
#define FILE_CATEGORIZER_H

#include <string>
#include <vector>

class FileCategorizer {
public:
    FileCategorizer();
    std::string categorizeFile(const std::string& filePath);
    // More methods for actual categorization logic will be added later
};

#endif // FILE_CATEGORIZER_H
