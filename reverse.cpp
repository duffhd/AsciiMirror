#include <iostream>
#include <string>
#include <vector>

#include "reverse.hpp"

namespace AsciiMirror {
    void reverse(const std::string &str) {
        auto splitLines = ::splitNewLine(str);
        std::size_t biggestLine = ::getBiggestLine(splitLines);
        ::padAndReverseLines(splitLines, biggestLine);
    }
}

namespace {
    [[nodiscard]] StrVec splitNewLine(const std::string &str) {
        std::vector<std::string> splitStr{};
        std::size_t lastSubstr = 0;

        for (size_t i = 0; i != str.size(); i += 1) {
            if (str[i] == '\n') {
                auto line = str.substr(lastSubstr, i - lastSubstr);
                splitStr.push_back(line);
                lastSubstr = i + 1;
            }
        }
        auto lastLine = str.substr(lastSubstr, splitStr.size() - lastSubstr - 1);
        splitStr.push_back(lastLine);

        return splitStr;
    }

    [[nodiscard]] std::size_t getBiggestLine(const StrVec &strVec) {
        std::size_t biggest = 0;

        for (const auto &i: strVec) {
            if (i.size() > biggest) {
                biggest = i.size();
            }
        }

        return biggest;
    }


    void padAndReverseLines(StrVec &strVec, std::size_t biggestLine) {
        for (std::size_t i = 0; i != strVec.size(); i += 1) {
            if (strVec[i].empty()) continue;

            std::size_t padding = biggestLine - strVec[i].size();
            for (std::size_t j = 0; j != padding; j += 1) {
                strVec[i].push_back(' ');
            }
        }

        for (std::size_t i = 0; i != strVec.size(); i += 1) {
            for (std::size_t j = strVec[i].size(); j != 0; j -= 1) {
                std::cout << mirrorChar(strVec[i][j - 1]);
            }
            std::cout << '\n';
        }
    }

    [[nodiscard]] char mirrorChar(char c) {
        switch (c) {
            /* Alphabet */
            case 'b':
                return 'd';
            case 'd':
                return 'b';
            case 'p':
                return 'q';
            case 'q':
                return 'p';
                /* Brackets */
            case '{':
                return '}';
            case '}':
                return '{';
            case ')':
                return '(';
            case '(':
                return ')';
            case ']':
                return '[';
            case '[':
                return ']';
                /* Slash */
            case '\\':
                return '/';
            case '/':
                return '\\';
            default:
                return c;
        }
    }
}
