#include <iostream>
#include <vector>
#include <map>

bool isSymmetricalPattern(const std::vector<int>& lengths) {
    std::map<int, int> freqMap;
    for (int length : lengths) {
        freqMap[length]++;
    }

    int oddCount = 0;
    for (const auto& entry : freqMap) {
        if (entry.second % 2 != 0) {
            oddCount++;
            if (oddCount > 1) {
                return false; // More than one odd frequency, can't form symmetrical pattern
            }
        }
    }

    return true;
}

int main() {
    int numFences;
    std::cout << "Enter the number of fences: ";
    std::cin >> numFences;

    std::vector<int> fenceLengths(numFences);

    std::cout << "Enter the lengths of the fences:\n";
    for (int i = 0; i < numFences; ++i) {
        std::cin >> fenceLengths[i];
    }

    if (isSymmetricalPattern(fenceLengths)) {
        std::cout << "The fence lengths can form a symmetrical pattern.\n";
    } else {
        std::cout << "The fence lengths cannot form a symmetrical pattern.\n";
    }

    return 0;
}
