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
    for(i=0;i<4;i++) a[i].x = 0;
    a[0].y = 21;
    a[1].y = 20;
    a[2].y = 19;
    a[3].y = 18;
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
    for(i=0;i<4;i++) a[i].y = 5;
    a[0].x = 11;
    a[1].x = 10;
    a[2].x = 9;
    a[3].x = 8;
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
    for(i=0;i<4;i++) a[i].y = 5;
    a[0].x = -1;
    a[1].x = 0;
    a[2].x = 1;
    a[3].x = 2;
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
    field[5][9] = 1;
    for(i=0;i<4;i++) a[i].y = 5;
    a[0].x = 9;
    a[1].x = 8;
    a[2].x = 7;
    a[3].x = 6;
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
    a[0].x = 9;
    a[1].x = 8;
    a[2].x = 7;
    a[3].x = 6;
    if(check(field))
    {
        SUCCEED();
    }else {
        FAIL();
    }
}
#endif // CHECK_H
