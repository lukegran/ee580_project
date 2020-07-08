//
// Created by Zhou on 7/7/2020.
//

#include "random_vectors.h"
int random_vectors::generate() {
    std::ofstream random_vector;
    random_vector.open("random_vectors.txt");
    std::string s = "                                                               ";
    std::mt19937 my_rand(time(0));
    int number = 0;
    int j_number = 0;
    int i_number = 0;
    for (int t = 0; t < 900; t++) {
        for (int i = 0; i < 63; i++) {
            s[i] = (my_rand() % 2 + '0');
            i++;
            if (i != 62)
                s[i] = ' ';
        }
        //std::cout << s;
        if (i_number < 50 && (s.substr(0, 11) == "0 0 0 1 0 0" || s.substr(0, 11) == "0 0 0 1 0 1" ))
            i_number++;
        else if (i_number > 50 && (s.substr(0, 11) == "0 0 0 1 0 0" || s.substr(0, 11) == "0 0 0 1 0 1" ))
            continue;
        else if (j_number < 50 && (s.substr(0, 11) == "0 0 0 0 1 0" || s.substr(0, 11) == "0 0 0 0 1 1"))
            j_number++;
        else if (j_number > 50 && (s.substr(0, 11) == "0 0 0 0 1 0" || s.substr(0, 11) == "0 0 0 0 1 1"))
            continue;
        random_vector << s << std::endl;
        number++;
        if (number == 800)
            return 0;
    }
}