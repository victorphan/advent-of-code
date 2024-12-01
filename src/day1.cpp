#include <algorithm>
#include <cassert>
#include <cstdlib>
#include <fstream>
#include <iostream>
#include <ranges>
#include <vector>

namespace {
constexpr auto totalDifferenceDistance(std::vector<int>& list1, std::vector<int>& list2) -> int {
    assert(list1.size() == list2.size());
    std::ranges::sort(list1);
    std::ranges::sort(list2);
    return std::ranges::fold_left(std::ranges::zip_view(list1, list2), 0,
                                  [](int x, auto const& e) -> int { return x + abs(std::get<0>(e) - std::get<1>(e)); });
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
    std::vector<int> list1;
    std::vector<int> list2;

    int num1 = 0;
    int num2 = 0;
    while (input_file >> num1 >> num2) {
        list1.push_back(num1);
        list2.push_back(num2);
    }

    input_file.close();

    int total = totalDifferenceDistance(list1, list2);
    std::cout << "Sum of total differences: " << total << '\n';

    return 0;
}
