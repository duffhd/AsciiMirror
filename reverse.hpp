#pragma once

#include <vector>

using StrVec = std::vector<std::string>;

namespace AsciiMirror {
    void reverse(const std::string &str);
}

namespace {
    [[nodiscard]] StrVec splitNewLine(const std::string &str);

    [[nodiscard]] std::size_t getBiggestLine(const StrVec &strVec);

    void padAndReverseLines(StrVec &strVec, std::size_t biggestLine);

    [[nodiscard]] char mirrorChar(char c);
}
