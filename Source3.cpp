#include <iostream>
#include <regex>
#include <string>
#include <vector>


int main()
{
    std::vector <std::string> v{ "alex@yandex.ru",
                    "alex-27@yandex.com",
                    "alex.27@yandex.com",
                    "alex111@devcolibri.com",
                    "alex.100@devcolibri.com.ua",
                    "alex@1.com",
                    "alex@gmail.com.com",
                    "alex+27@gmail.com",
                    "alex-27@yandex-test.com" };

    std::regex regular("([\\w-]+)"
        "(@)"
        "([\\w-]+)"
        "(\.)"
        "([A-Za-z]{2,4})");

    for (auto i : v) {
        std::cmatch result;
        if (std::regex_match(i.c_str(), result, regular))
            std::cout << result[0] << " - " << result[3] << result[4] << result[5] << std::endl;
        else
            std::cout << i << " - false" << std::endl;
    }
    return 0;
}