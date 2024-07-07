#include <iostream>
#include <map>
#include <string>

using namespace std;

/**
 * Print Roman number equivalent for numbers 1-1000
*/

string roman_numeral(int num) {
    map<int, string> roman_char;
    roman_char[1000] = "M";
    roman_char[900] = "CM";
    roman_char[500] = "D";
    roman_char[400] = "CD";
    roman_char[100] = "C";
    roman_char[90] = "XC";
    roman_char[50] = "L";
    roman_char[5] = "V";
    roman_char[4] = "IV";
    roman_char[1] = "I";

    string roman_out = "";

    for (auto it = roman_char.rbegin(); it != roman_char.rend(); ++it) {
        int cur_roman_num = it->first;
        if (num < cur_roman_num) {
            continue;
        }
        int repeat = num / cur_roman_num;
        num = num % cur_roman_num;
        
        for (int i = 0; i < repeat; i++) {
            roman_out = roman_out + it->second;
        }
    } 

    return roman_out;
}

int main() {
    cout << roman_numeral(754) << endl;
    return 0;
}