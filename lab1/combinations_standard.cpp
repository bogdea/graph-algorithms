#include <iostream>
#include <vector>

int n, k;
std::vector<int> combination;

void generateCombinations(int start)
{
    if (combination.size() == k)
    {
        for (int value : combination)
        {
            std::cout << value << " ";
        }

        std::cout << std::endl;

        return;
    }

    for (int i = start; i <= n; ++i)
    {
        combination.push_back(i);
        generateCombinations(i + 1);
        combination.pop_back();
    }
}

int main()
{
    std::cout << "n: ";
    std::cin >> n;

    std::cout << "k: ";
    std::cin >> k;

    generateCombinations(1);

    return 0;
}