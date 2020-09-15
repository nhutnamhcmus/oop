#pragma clang diagnostic push
#pragma ide diagnostic ignored "cppcoreguidelines-narrowing-conversions"
//
// Created by sakur on 9/15/2020.
//

#ifndef WEEK_9_TOKENIZER_H
#define WEEK_9_TOKENIZER_H
#include <vector>
#include <string>

class Tokenizer {
public:
    static std::vector<std::string> parse(const std::string& line, const std::string& separator) {
        std::vector<std::string> tokens;
        int start_pos = 0;
        size_t found_pos = line.find_first_of(separator, start_pos);
        while (found_pos != std::string::npos) {
            int count = (int)found_pos - start_pos;
            std::string token = line.substr(start_pos, count);
            tokens.push_back(token);

            start_pos = found_pos + separator.length();
            found_pos = line.find_first_of(separator, start_pos);
        }

        int count = line.length() - start_pos;
        std::string token = line.substr(start_pos, count);
        tokens.push_back(token);
        return tokens;
    }
};

#endif //WEEK_9_TOKENIZER_H

#pragma clang diagnostic pop