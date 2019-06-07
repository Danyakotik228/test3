#ifndef CALCULATE_H
#define CALCULATE_H

#include <gtest/gtest.h>

extern "C" {
#include "functions.h"
}

//Проверка на добавление очков к изначально нулевой сумме
TEST(calculate, num0){
    ASSERT_EQ(calculate(0, 8), 8);
    ASSERT_EQ(calculate(0, 2525), 2525);
    ASSERT_EQ(calculate(0, 0), 0);
}

//Проверка на добавление нуля очков
TEST(calculate, num1){
    ASSERT_EQ(calculate(7, 0), 7);
    ASSERT_EQ(calculate(2525, 0), 2525);
    ASSERT_EQ(calculate(0, 0), 0);
}

//Проверка функции на работу
TEST(calculate, num2){
    ASSERT_EQ(calculate(7, 5), 12);
    ASSERT_EQ(calculate(14, 14), 28);
    ASSERT_EQ(calculate(333, 333), 666);
}

#endif // CALCULATE_H
