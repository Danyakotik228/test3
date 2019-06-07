#ifndef FIBONACHI_H
#define FIBONACHI_H

#include <gtest/gtest.h>

extern "C" {
#include "functions.h"
}

//проверка на отчищение массива, заданного единицами
TEST(cleararray, num0) {
    int field[20][10];
    for (int i = 0; i < 20; i++) {
        for(int j = 0; j < 10; j++){
            field[i][j] = 1;
        }
    }
    cleararray(field);
    int z = 0;
    for (int i = 0; i < 20; i++) {
        for(int j = 0; j < 10; j++){
            if(field[i][j]) z = 1;
        }
    }
    if(z == 1)
    {
        FAIL();
    }
     else
    {
        SUCCEED();
    }
}

//проверка на отчищение массива, заданного случайными числами
TEST(cleararray, num1) {
    int field[20][10];
    for (int i = 0; i < 20; i++) {
        for(int j = 0; j < 10; j++){
            field[i][j] = qrand() % 1000;
        }
    }
    cleararray(field);
    int z = 0;
    for (int i = 0; i < 20; i++) {
        for(int j = 0; j < 10; j++){
            if(field[i][j]) z = 1;
        }
    }
    if(z != 0)
    {
        FAIL();
    }
     else
    {
        SUCCEED();
    }
}

//проверка на отчищение массива, заданного крупными числами
TEST(cleararray, num2) {
    int field[20][10];
    for (int i = 0; i < 20; i++) {
        for(int j = 0; j < 10; j++){
            field[i][j] = 1000000000;
        }
    }
    cleararray(field);
    int z = 0;
    for (int i = 0; i < 20; i++) {
        for(int j = 0; j < 10; j++){
            if(field[i][j]) z = 1;
        }
    }
    if(z != 0)
    {
        FAIL();
    }
     else
    {
        SUCCEED();
    }
}


#endif // FIBONACHI_H
