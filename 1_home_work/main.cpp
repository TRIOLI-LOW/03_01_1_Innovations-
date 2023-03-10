#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> arr = { 4, 7, 9, 14, 12 };

    std::for_each(arr.begin(), arr.end(), [](int& x) { if (x % 2 != 0) x *= 3; });

    for (const auto& x : arr) {
        std::cout << x << " ";
    }
    std::cout << std::endl;

    return 0;
}