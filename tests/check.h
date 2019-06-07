#ifndef CHECK_H
#define CHECK_H

#include <gtest/gtest.h>

extern "C" {
#include "functions.h"
}

//Проверка невозможности выхода за нижнюю границу
TEST(check, num0){
    int field[20][10], i ,j;
    for(i = 0; i < 20; i++){
        for (j = 0; j  < 10; j++) {
            field[i][j] = 0;
        }
    }
    for(i=0;i<4;i++) a[i].x = 2;
    a[0].y = 48;
    a[1].y = 47;
    a[2].y = 46;
    a[3].y = 45;
    if(!check(field))
    {
        SUCCEED();
    }else {
        FAIL();
    }
}

//Проверка невозможности выхода за правую границу
TEST(check, num1){
    int field[20][10], i ,j;
    for(i = 0; i < 20; i++){
        for (j = 0; j  < 10; j++) {
            field[i][j] = 0;
        }
    }
    for(i=0;i<4;i++) a[i].y = 6;
    a[0].x = 22;
    a[1].x = 21;
    a[2].x = 20;
    a[3].x = 19;
    if(!check(field))
    {
        SUCCEED();
    }else {
        FAIL();
    }
}

//Проверка невозможности выхода за левую границу
TEST(check, num2){
    int field[20][10], i ,j;
    for(i = 0; i < 20; i++){
        for (j = 0; j  < 10; j++) {
            field[i][j] = 0;
        }
    }
    for(i=0;i<4;i++) a[i].y = 6;
    a[0].x = -10;
    a[1].x = -9;
    a[2].x = -8;
    a[3].x = -7;
    if(!check(field))
    {
        SUCCEED();
    }else {
        FAIL();
    }
}

//Проверка невозможности пересечения фигур
TEST(check, num3){
    int field[20][10], i ,j;
    for(i = 0; i < 20; i++){
        for (j = 0; j  < 10; j++) {
            field[i][j] = 0;
        }
    }
    field[6][5] = 1;
    for(i=0;i<4;i++) a[i].y = 6;
    a[0].x = 5;
    a[1].x = 4;
    a[2].x = 3;
    a[3].x = 2;
    if(!check(field))
    {
        SUCCEED();
    }else {
        FAIL();
    }
}
//Проверка если движение возможно
TEST(check, num4){
    int field[20][10], i ,j;
    for(i = 0; i < 20; i++){
        for (j = 0; j  < 10; j++) {
            field[i][j] = 0;
        }
    }
    for(i=0;i<4;i++) a[i].y = 5;
    a[0].x = 5;
    a[1].x = 4;
    a[2].x = 3;
    a[3].x = 2;
    if(check(field))
    {
        SUCCEED();
    }else {
        FAIL();
    }
}
#endif // CHECK_H
