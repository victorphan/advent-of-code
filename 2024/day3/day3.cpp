#include <cassert>
#include <catch2/catch_test_macros.hpp>
#include <fstream>
#include <iostream>
#include <string>
#include <vector>

TEST_CASE("test") { REQUIRE(true); }

namespace {
struct Mul {
    Mul(int x, int y) : x(x), y(y) {}
    [[nodiscard]] auto compute() const -> int { return x * y; }

  private:
    int x = {};
    int y = {};
};

std::string mul = "mul()";

auto parse(const std::string& s) -> std::vector<int> {
    for (auto c : s) {
        std::cout << c;
    }
    return {};
}
} // namespace

auto main(int argc, char* argv[]) -> int {
    if (argc != 2) {
        std::cerr << "Usage: " << argv[0] << " <filename>" << '\n';
        return 1;
    }

    std::ifstream input_file(argv[1]);
    if (!input_file) {
        std::cerr << "Error opening file!" << '\n';
        return 1;
    }

    std::string line;
    while (std::getline(input_file, line)) {
        parse(line);
    }

    input_file.close();
    return 0;
}
