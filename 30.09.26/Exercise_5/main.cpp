#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <set>
#include <algorithm>

std::map<std::string, std::vector<std::string>>
groupAnagrams(const std::vector<std::string> &words)
{
    std::map<std::string, std::vector<std::string>> data;

    for (std::string word : words)
    {
        std::string clone = word;
        std::sort(clone.begin(), clone.end());
        data[clone].push_back(word);
    }

    return data;
}

std::set<int> commonElements(
    const std::vector<int> &a,
    const std::vector<int> &b)
{
    std::set<int> data;

    for (int a_value : a)
    {
        for (int b_value : b)
        {
            if (a_value == b_value)
            {
                data.insert(a_value);
            }
        }
    }

    return data;
}

int main()
{
    std::vector<std::string> words = {
        "listen", "silent", "enlist",
        "google", "gogole",
        "cat", "act", "tac"};

    std::map<std::string, std::vector<std::string>> data = groupAnagrams(words);

    for (auto &[key, value] : data)
    {
        std::cout << key << ": ";
        for (auto word : value)
        {
            std::cout << word << ",";
        }
        std::cout << "\n";
    }

    std::set<int> dataNum = commonElements({4, 8, 15, 16, 23, 42, 8}, {15, 3, 42, 8, 99, 4, 4});

    for (int value : dataNum)
    {
        std::cout << value << ",";
    }

    return 0;
}