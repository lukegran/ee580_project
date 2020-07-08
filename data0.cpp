//
// Created by Zhou on 7/6/2020.
//

#include "data0.h"
#include <string>
int data0::generate() {
    std::ofstream f;
    f.open("data0.txt");
    std::string s = "                                                               ";
    std::mt19937 my_rand(time(0));
    int number = 0;
    for (int t = 0; t < 7100; t++) {
        for (int i = 0; i < 63; i++) {
            s[i] = (my_rand() % 2 + '0');
            i++;
            if (i != 62)
            s[i] = ' ';
        }
        //std::cout << s;
        if (s.substr(0, 11) == "0 0 0 0 0 0" && s.substr(41, 21) == "0 0 0 0 0 1 0 0 0 0 0" ||
            s.substr(0, 11) == "0 0 0 0 0 0" && s.substr(41, 21) == "0 0 0 0 0 1 0 0 0 0 1" ||
            s.substr(0, 11) == "0 0 0 0 0 0" && s.substr(41, 21) == "0 0 0 0 0 1 0 0 0 1 0" ||
            s.substr(0, 11) == "0 0 0 0 0 0" && s.substr(41, 21) == "0 0 0 0 0 1 0 0 0 1 1" ||
            s.substr(0, 11) == "0 0 0 0 0 0" && s.substr(41, 21) == "0 0 0 0 0 1 0 0 1 0 0" ||
            s.substr(0, 11) == "0 0 0 0 0 0" && s.substr(41, 21) == "0 0 0 0 0 1 0 0 1 0 1" ||
            s.substr(0, 11) == "0 0 0 0 0 0" && s.substr(41, 21) == "0 0 0 0 0 1 0 0 1 1 0" ||
            s.substr(0, 11) == "0 0 0 0 0 0" && s.substr(41, 21) == "0 0 0 0 0 1 0 0 1 1 1" ||
            s.substr(0, 11) == "0 0 0 0 0 0" && s.substr(41, 21) == "0 0 0 0 0 1 0 1 0 1 0" ||
            s.substr(0, 21) == "0 0 0 0 0 0 0 0 0 0 0" && s.substr(51, 11) == "0 0 0 0 0 0" ||
            s.substr(0, 21) == "0 0 0 0 0 0 0 0 0 0 0" && s.substr(51, 11) == "0 0 0 0 1 0" ||
            s.substr(0, 21) == "0 0 0 0 0 0 0 0 0 0 0" && s.substr(51, 11) == "0 0 0 0 1 1" ||
            s.substr(0, 11) == "0 0 1 0 0 0" ||
            s.substr(0, 11) == "0 0 1 0 0 1" ||
            s.substr(0, 11) == "0 0 1 1 0 0" ||
            s.substr(0, 11) == "0 0 1 1 0 1" ||
            s.substr(0, 11) == "0 0 1 1 1 0" ||
            s.substr(0, 21) == "0 0 1 1 1 1 0 0 0 0 0" ||
            s.substr(0, 11) == "1 0 0 0 1 1" ||
            s.substr(0, 11) == "1 0 1 0 1 1" ||
            s.substr(0, 11) == "0 0 0 1 0 0" ||
            s.substr(0, 11) == "0 0 0 1 0 1" ||
            s.substr(0, 11) == "0 0 1 0 1 0" ||
            s.substr(0, 11) == "0 0 1 0 1 1" ||
            s.substr(0, 11) == "0 0 0 0 1 0" ||
            s.substr(0, 11) == "0 0 0 0 1 1"
                );
        else {
            f << s << std::endl;
            number++;
            if (number == 5100)
                return 0;
        }
    }
}