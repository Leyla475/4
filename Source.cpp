#include <iostream>
#include <iomanip>
#include <iterator>
#include <locale>
#include <sstream>



void appeal() {
    std::cout << "What currency do you want to convert?" <<
        std::endl << "1 - rubles" <<
        std::endl << "2 -dollars" <<
        std::endl << "3 - euro" <<
        std::endl << "4 - yen" <<
        std::endl << "5 - finish the operation" << std::endl;
};

void rubles() {
    std::cout << "enter the amount to convert in rubles" << std::endl;
    long double money_;
        std::cin >> std::get_money(money_, false);
        std::cout << "What currency do you want to convert?" <<
        std::endl << "1 -dollars" <<
        std::endl << "2 - euro" <<
        std::endl << "3 - yen" <<
        std::endl << "4 - finish the operation" << std::endl;
    int _num;
    std::cin >> _num;
    switch (_num) {
    case 1: {
        money_ = money_ / 73.4;
        std::cout.imbue(std::locale("en_US.UTF-8"));
        std::cout << std::showbase << std::put_money(money_) << std::endl;
        break;
    };
    case 2: {
        money_ = money_ / 80.2;
        std::cout.imbue(std::locale("de_De.UTF-8"));
        std::cout << std::showbase << std::put_money(money_) << std::endl;
        break;
    };
    case 3: {
        money_ = money_ * 1.48;
        std::cout.imbue(std::locale("ja_JP.UTF-8"));
        std::cout << "ja_JP: " << std::put_money(money_) << std::endl;
        break;
    };
    case 4: {break; };
    default:
    {std::cout << "try again." << std::endl;
    break; }
    }
};

void dollars() {
    std::cout << "enter the amount to convert in dollars" << std::endl;
    long double money_;
    //cin.imbue(std::locale("en_US.utf8"));
    std::cin >> std::get_money(money_, false);
    std::cout << "What currency do you want to convert?" <<
        std::endl << "1 - rubles" <<
        std::endl << "2 - euro" <<
        std::endl << "3 - yen" <<
        std::endl << "4 - finish the operation" << std::endl;
    int _num;
    std::cin >> _num;
    switch (_num) {
    case 1: {
        money_ = money_ * 73.4;
        std::cout.imbue(std::locale("ru_RU.UTF-8"));
        std::cout << std::showbase << std::put_money(money_) << std::endl;
        break;
    };
    case 2: {
        money_ = money_ / 1.2;
        std::cout.imbue(std::locale("de_LI.UTF-8"));
        std::cout << std::showbase << std::put_money(money_, true) << std::endl;
        break;
    };
    case 3: {
        money_ = money_ * 108.54;
        std::cout.imbue(std::locale("ja_JP.UTF-8"));
        std::cout << std::showbase << std::put_money(money_) << std::endl;
        break;
    };
    case 4: {break; };
    default:
    {std::cout << "try again" << std::endl;
    break; }
    }
};

void euros() {
    std::cout << "enter the amount to convert in euro" << std::endl;
    long double money_;
    //cin.imbue(std::locale("de_DE.utf8"));
    std::cin >> std::get_money(money_, false);

    std::cout << "What currency do you want to convert?" <<
        std::endl << "1 - dollars" <<
        std::endl << "2 - rubles" <<
        std::endl << "3 - yen" <<
        std::endl << "4 - finish the operation" << std::endl;
    int _num;
    std::cin >> _num;

    switch (_num) {
    case 1: {
        money_ = money_ * 1.2;
        std::cout.imbue(std::locale("en_US.UTF-8"));
        std::cout << std::showbase << std::put_money(money_) << std::endl;
        break;
    };
    case 2: {
        money_ = money_ * 80.2;
        std::cout.imbue(std::locale("ru_RU.UTF-8"));
        std::cout << std::showbase << std::put_money(money_) << std::endl;
        break;
    };
    case 3: {
        money_ = money_ * 130.05;
        std::cout.imbue(std::locale("ja_JP.UTF-8"));
        std::cout << std::showbase << std::put_money(money_) << std::endl;
        break;
    };
    case 4: {break; };
    default:
    {std::cout << "try again" << std::endl;
    break; }
    }
};

void yens() {
    std::cout << "enter the amount to convert in yen" << std::endl;
    long double money_;
    //cin.imbue(std::locale("ja_JP.utf8"));
    std::cin >> std::get_money(money_);
    std::cout << " " << std::endl;
    std::cout << "What currency do you want to convert?" <<
        std::endl << "1 - dollars" <<
        std::endl << "2 - euro" <<
        std::endl << "3 - rubles" <<
        std::endl << "4 - finish the operation" << std::endl;
    int _num;
    std::cin >> _num;
    switch (_num) {
    case 1: {
        money_ = money_ / 108.54;
        std::cout.imbue(std::locale("en_US.UTF-8"));
        std::cout << std::showbase << std::put_money(money_) << std::endl;
        break;
    };
    case 2: {
        money_ = money_ / 130.05;
        std::cout.imbue(std::locale("de_DE.utf8"));
        std::cout << std::showbase << std::put_money(money_) << std::endl;
        break;
    };
    case 3: {
        money_ = money_ / 1.48;
        std::cout.imbue(std::locale("ru_RU.UTF-8"));
        std::cout << std::showbase << std::put_money(money_) << std::endl;
        break;
    };
    case 4: {break; };
    default:
    {std::cout << "try again" << std::endl;
    break; }
    }
};

int main()

{
    int n = 0;
    do {
        appeal();
        int number;
        std::cin >> number;
        n = number;
        switch (number) {
        case 1: {
            rubles();
            break;
        };
        case 2: {
            dollars();
            break;
        };
        case 3: {
            euros();
            break;
        };
        case 4: {
            yens();
            break;
        };
        case 5: {break; };
        default:
        {std::cout << "try again" << std::endl;
        break; }
        }
    } while (n != 5);

    return 0;

}