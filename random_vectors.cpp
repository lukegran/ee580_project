//
// Created by Zhou on 7/7/2020.
//

#include "random_vectors.h"
void random_vectors::generate() {
    std::ofstream random_vector;
    random_vector.open("random_vectors.txt");
    std::string s = "                                                               ";
    std::mt19937 my_rand(time(0));
    for (int t = 0; t < 900; t++) {
        for (int i = 0; i < 63; i++) {
            s[i] = (my_rand() % 2 + '0');
            i++;
            if (i != 62)
                s[i] = ' ';
        }
        //std::cout << s;
        //0 0 0 0 0 0 |0 0 0 0 0 0 0 0 0 0 |0 0 0 0 0 0 0 0 0 |0 0 0 0 0 0 0
        if (s.substr(0, 11) == "0 0 0 1 0 0" || s.substr(0, 11) == "0 0 0 1 0 1" )
            for (int p = 32; p < 49; p++) {
                s[p] = '0';
                p++;
            }
        else if (s.substr(0, 11) == "0 0 0 1 0 0" || s.substr(0, 11) == "0 0 0 1 0 1" )
            for (int p = 32; p < 49; p++) {
                s[p] = '0';
                p++;
            }
        else if (s.substr(0, 11) == "0 0 0 0 1 0" || s.substr(0, 11) == "0 0 0 0 1 1")
            for (int p = 12; p < 49; p++) {
                s[p] = '0';
                p++;
            }
        else if (s.substr(0, 11) == "0 0 0 0 1 0" || s.substr(0, 11) == "0 0 0 0 1 1")
            for (int p = 12; p < 49; p++) {
                s[p] = '0';
                p++;
            }
        random_vector << s << std::endl;
    }
}