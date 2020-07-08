#include <iostream>
#include <fstream>
#include <ctime>
#include <random>
#include "data0.h"
#include "random_vectors.h"
int main() {
    data0 data;
    int i = data.generate();
    random_vectors vectors;
    vectors.generate();
    std::ofstream f1;
    std::ofstream f2;
    std::ofstream f3;
    //std::ofstream rv;
    std::ofstream y2;
    std::ofstream y3;
    f1.open("data1.txt");
    f2.open("data2.txt");
    f3.open("data3.txt");
    y2.open("y2.txt");
    y3.open("y3.txt");
    //rv.open("random_vectors.txt");
    std::mt19937 my_rand(time(0));
    //---------Random Vectors---------//
//    for (int i = 0; i < 800; i++) {
//        for (int j = 0; j < 32; j++)
//            rv << my_rand() % 2 << ' ';
//        rv << std::endl;
//    }
    //---------------2----------------//
    for (int j = 0; j < 5100; j++)
        y2 << 2 << ' ';
    //---------------3----------------//
    for (int j = 0; j < 5100; j++)
        y3 << 3 << ' ';
    //-------------R-type-------------//
    //--------------add---------------//
    for (int i = 0; i < 300; i++) {
        f1 << "0 0 0 0 0 0 ";
        for (int j = 0; j < 15; j++)
            f1 << my_rand() % 2 << ' ';
        f1 << "1 0 0 0 0 1 0 0 0 0 0" << std::endl;
    }
    //--------------addu--------------//
    for (int i = 0; i < 300; i++) {
        f1 << "0 0 0 0 0 0 ";
        for (int j = 0; j < 15; j++)
            f1 << my_rand() % 2 << ' ';
        f1 << "1 0 0 0 0 1 0 0 0 0 1" << std::endl;
    }
    //--------------sub---------------//
    for (int i = 0; i < 300; i++) {
        f1 << "0 0 0 0 0 0 ";
        for (int j = 0; j < 15; j++)
            f1 << my_rand() % 2 << ' ';
        f1 << "1 0 0 0 0 1 0 0 0 1 0" << std::endl;
    }
    //--------------subu--------------//
    for (int i = 0; i < 300; i++) {
        f1 << "0 0 0 0 0 0 ";
        for (int j = 0; j < 15; j++)
            f1 << my_rand() % 2 << ' ';
        f1 << "1 0 0 0 0 1 0 0 0 1 1" << std::endl;
    }
    //--------------and---------------//
    for (int i = 0; i < 300; i++) {
        f1 << "0 0 0 0 0 0 ";
        for (int j = 0; j < 15; j++)
            f1 << my_rand() % 2 << ' ';
        f1 << "1 0 0 0 0 1 0 0 1 0 0" << std::endl;
    }
    //---------------or---------------//
    for (int i = 0; i < 300; i++) {
        f1 << "0 0 0 0 0 0 ";
        for (int j = 0; j < 15; j++)
            f1 << my_rand() % 2 << ' ';
        f1 << "1 0 0 0 0 1 0 0 1 0 1" << std::endl;
    }
    //--------------xor---------------//
    for (int i = 0; i < 300; i++) {
        f1 << "0 0 0 0 0 0 ";
        for (int j = 0; j < 15; j++)
            f1 << my_rand() % 2 << ' ';
        f1 << "1 0 0 0 0 1 0 0 1 1 0" << std::endl;
    }
    //--------------nor---------------//
    for (int i = 0; i < 300; i++) {
        f1 << "0 0 0 0 0 0 ";
        for (int j = 0; j < 15; j++)
            f1 << my_rand() % 2 << ' ';
        f1 << "1 0 0 0 0 1 0 0 1 1 1" << std::endl;
    }
    //--------------slt---------------//
    for (int i = 0; i < 300; i++) {
        f1 << "0 0 0 0 0 0 ";
        for (int j = 0; j < 15; j++)
            f1 << my_rand() % 2 << ' ';
        f1 << "1 0 0 0 0 1 0 1 0 1 0" << std::endl;
    }
    //--------------sltu--------------//
    for (int i = 0; i < 300; i++) {
        f1 << "0 0 0 0 0 0 ";
        for (int j = 0; j < 15; j++)
            f1 << my_rand() % 2 << ' ';
        f1 << "1 0 0 0 0 1 0 1 0 1 1" << std::endl;
    }
    //--------------sll---------------//
    for (int i = 0; i < 300; i++) {
        f1 << "0 0 0 0 0 0 0 0 0 0 0 ";
        for (int j = 0; j < 15; j++)
            f1 << my_rand() % 2 << ' ';
        f1 << "0 0 0 0 0 0" << std::endl;
    }
    //--------------srl---------------//
    for (int i = 0; i < 300; i++) {
        f1 << "0 0 0 0 0 0 0 0 0 0 0 ";
        for (int j = 0; j < 15; j++)
            f1 << my_rand() % 2 << ' ';
        f1 << "0 0 0 0 1 0" << std::endl;
    }
    //--------------sra---------------//
    for (int i = 0; i < 300; i++) {
        f1 << "0 0 0 0 0 0 0 0 0 0 0 ";
        for (int j = 0; j < 15; j++)
            f1 << my_rand() % 2 << ' ';
        f1 << "0 0 0 0 1 1" << std::endl;
    }
    //--------------sllv--------------//
    for (int i = 0; i < 300; i++) {
        f1 << "0 0 0 0 0 0 ";
        for (int j = 0; j < 15; j++)
            f1 << my_rand() % 2 << ' ';
        f1 << "0 0 0 0 0 0 0 0 1 0 0" << std::endl;
    }
    //--------------srlv--------------//
    for (int i = 0; i < 300; i++) {
        f1 << "0 0 0 0 0 0 ";
        for (int j = 0; j < 15; j++)
            f1 << my_rand() % 2 << ' ';
        f1 << "0 0 0 0 0 0 0 0 1 1 0" << std::endl;
    }
    //--------------srav--------------//
    for (int i = 0; i < 300; i++) {
        f1 << "0 0 0 0 0 0 ";
        for (int j = 0; j < 15; j++)
            f1 << my_rand() % 2 << ' ';
        f1 << "0 0 0 0 0 0 0 0 1 1 1" << std::endl;
    }
    //---------------jr---------------//
    for (int i = 0; i < 300; i++) {
        f1 << "0 0 0 0 0 0 ";
        for (int j = 0; j < 5; j++)
            f1 << my_rand() % 2 << ' ';
        f1 << "0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 1 0 0 0" << std::endl;
    }
    //-------------I-type-------------//
    //--------------addi--------------//
    for (int i = 0; i < 425; i++) {
        f2 << "0 0 1 0 0 0 ";
        for (int j = 0; j < 26; j++)
            f2 << my_rand() % 2 << ' ';
        f2 << std::endl;
    }
    //--------------addiu-------------//
    for (int i = 0; i < 425; i++) {
        f2 << "0 0 1 0 0 1 ";
        for (int j = 0; j < 26; j++)
            f2 << my_rand() % 2 << ' ';
        f2 << std::endl;
    }
    //--------------andi--------------//
    for (int i = 0; i < 425; i++) {
        f2 << "0 0 1 1 0 0 ";
        for (int j = 0; j < 26; j++)
            f2 << my_rand() % 2 << ' ';
        f2 << std::endl;
    }
    //--------------ori---------------//
    for (int i = 0; i < 425; i++) {
        f2 << "0 0 1 1 0 1 ";
        for (int j = 0; j < 26; j++)
            f2 << my_rand() % 2 << ' ';
        f2 << std::endl;
    }
    //-------------xori---------------//
    for (int i = 0; i < 425; i++) {
        f2 << "0 0 1 1 1 0 ";
        for (int j = 0; j < 26; j++)
            f2 << my_rand() % 2 << ' ';
        f2 << std::endl;
    }
    //-------------lui----------------//
    for (int i = 0; i < 425; i++) {
        f2 << "0 0 1 1 1 1 0 0 0 0 0 ";
        for (int j = 0; j < 21; j++)
            f2 << my_rand() % 2 << ' ';
        f2 << std::endl;
    }
    //--------------lw----------------//
    for (int i = 0; i < 425; i++) {
        f2 << "1 0 0 0 1 1 ";
        for (int j = 0; j < 26; j++)
            f2 << my_rand() % 2 << ' ';
        f2 << std::endl;
    }
    //--------------sw----------------//
    for (int i = 0; i < 425; i++) {
        f2 << "1 0 0 0 1 1 ";
        for (int j = 0; j < 26; j++)
            f2 << my_rand() % 2 << ' ';
        f2 << std::endl;
    }
    //--------------beq----------------//
    for (int i = 0; i < 425; i++) {
        f2 << "0 0 0 1 0 0 ";
        for (int j = 0; j < 26; j++)
            f2 << my_rand() % 2 << ' ';
        f2 << std::endl;
    }
    //--------------bne----------------//
    for (int i = 0; i < 425; i++) {
        f2 << "0 0 0 1 0 1 ";
        for (int j = 0; j < 26; j++)
            f2 << my_rand() % 2 << ' ';
        f2 << std::endl;
    }
    //--------------slti--------------//
    for (int i = 0; i < 425; i++) {
        f2 << "0 0 1 0 1 0 ";
        for (int j = 0; j < 26; j++)
            f2 << my_rand() % 2 << ' ';
        f2 << std::endl;
    }
    //--------------sltiu-------------//
    for (int i = 0; i < 425; i++) {
        f2 << "0 0 1 0 1 1 ";
        for (int j = 0; j < 26; j++)
            f2 << my_rand() % 2 << ' ';
        f2 << std::endl;
    }
    //-------------J-type-------------//
    //---------------j----------------//
    for (int i = 0; i < 2600; i++) {
        f3 << "0 0 0 0 1 0 ";
        for (int j = 0; j < 26; j++)
            f3 << my_rand() % 2 << ' ';
        f3 << std::endl;
    }
    //--------------jal---------------//
    for (int i = 0; i < 2500; i++) {
        f3 << "0 0 0 0 1 1 ";
        for (int j = 0; j < 26; j++)
            f3 << my_rand() % 2 << ' ';
        f3 << std::endl;
    }
    return 0;
}
