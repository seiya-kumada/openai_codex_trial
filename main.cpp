#include <iostream>
#include <array>
#include <string_view>
#include <ranges>

int main() {
    std::array<int, 12> numbers{1,2,3,4,5,6,7,8,9,10,11,12};
    std::array<std::string_view, 12> months{
        "January", "February", "March", "April", "May", "June",
        "July", "August", "September", "October", "November", "December"};

    for (auto [number, month] : std::views::zip(numbers, months)) {
        std::cout << number << ": " << month << '\n';
    }
    return 0;
}
