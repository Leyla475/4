#include <iostream>
#include <boost/locale.hpp>
#include <bitset>
#include <string>
#include <locale.h>
#include <vector>
#include <stdio.h>
#include <stdlib.h>
#include <unordered_map>

int main() {


	std::unordered_map<char32_t, std::basic_string<char32_t>> translit_table = {
	{U'�',U"a"}, {U'�',U"b"}, {U'�',U"v"},
	{U'�',U"g"}, {U'�',U"d"}, {U'�',U"e"},
	{U'�',U"yo"}, {U'�',U"zh"},{U'�',U"z"},
	{U'�',U"i"}, {U'�',U"j"}, {U'�',U"k"},
	{U'�',U"l"}, {U'�',U"m"}, {U'�',U"n"},
	{U'�',U"o"}, {U'�',U"p"}, {U'�',U"r"},
	{U'�',U"s"}, {U'�',U"t"}, {U'�',U"u"},
	{U'�',U"f"}, {U'�',U"x"}, {U'�',U"c"},
	{U'�',U"ch"}, {U'�',U"sh"}, {U'�',U"shh"},
	{U'�',U"``"}, {U'�',U"y`"}, {U'�',U"`"},
	{U'�',U"e`"}, {U'�',U"yu"}, {U'�',U"ya"},
	{U'�',U"A"}, {U'�',U"B"}, {U'�',U"V"},
	{U'�',U"G"}, {U'�',U"D"}, {U'�',U"E"},
	{U'�',U"YO"}, {U'�',U"ZH"}, {U'�',U"Z"},
	{U'�',U"I"}, {U'�',U"J"}, {U'�',U"K"},
	{U'�',U"L"}, {U'�',U"M"}, {U'�',U"N"},
	{U'�',U"O"}, {U'�',U"P"}, {U'�',U"R"},
	{U'�',U"S"}, {U'�',U"T"}, {U'�',U"U"},
	{U'�',U"F"}, {U'�',U"X"}, {U'�',U"X"},
	{U'�',U"CH"}, {U'�',U"SH"}, {U'�',U"SHH"},
	{U'�',U"``"}, {U'�',U"Y`"}, {U'�',U"`"},
	{U'�',U"E`"}, {U'�',U"YU"},{U'�',U"YA"},
	{U' ',U" "},
	};



	std::string line = "�������� ������� ����������";

	std::cout << line << std::endl;
	std::u32string u32str = std::boost::locale::conv::utf_to_utf < char32_t, char >(line);
	std::u32string newline;

	for (auto c : u32str) {
		for (auto i : translit_table) {
			if (i.first == c) {
				newline.append(i.second);
				break;
			}
			else if (c == ' ') {
				newline.append(U" ");
				break;
			}
		}
	}


	std::string newline8 = std::boost::locale::conv::utf_to_utf < char, char32_t >(newline);
	std::cout << newline8 << std::endl;

}