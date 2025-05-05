#include <iostream>
#include <vector>

int n, k;
std::vector<int> inputSet;
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

    for (int i = start; i < n; ++i)
    {
        combination.push_back(inputSet[i]);
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

    inputSet.resize(n);
    std::cout << "enter the " << n << " elements for the input set: " << std::endl;
    for (int i = 0; i < n; ++i)
    {
        std::cout << "element " << i + 1 << ": ";
        std::cin >> inputSet[i];
    }

    std::cout << "generated combinations: " << std::endl;
    generateCombinations(0);

    return 0;
}