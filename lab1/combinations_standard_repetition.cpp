#include <iostream>
#include <vector>

int n, k;
std::vector<int> combination;

void generateCombinations(int remaining, int start)
{
    if (remaining == 0)
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
        generateCombinations(remaining - 1, 1);
        combination.pop_back();
    }
}

int main()

{

    std::cout << "n: " << std::endl;
    std::cin >> n;

    std::cout << "k: " << std::endl;
    std::cin >> k;

    generateCombinations(k, 1);

    return 0;
}