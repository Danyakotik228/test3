#ifndef CALCULATE_H
#define CALCULATE_H

#include <gtest/gtest.h>

extern "C" {
#include "functions.h"
}

//Проверка на добавление очков к изначально нулевой сумме
TEST(calculate, num0){
    ASSERT_EQ(calculate(0, 5), 5);
    ASSERT_EQ(calculate(0, 1000), 1000);
    ASSERT_EQ(calculate(0, 0), 0);
}

//Проверка на добавление нуля очков
TEST(calculate, num1){
    ASSERT_EQ(calculate(5, 0), 5);
    ASSERT_EQ(calculate(1000, 0), 1000);
    ASSERT_EQ(calculate(0, 0), 0);
}

//Проерка функции на работу
TEST(calculate, num2){
    ASSERT_EQ(calculate(5, 5), 10);
    ASSERT_EQ(calculate(3, 4), 7);
    ASSERT_EQ(calculate(2, 10), 12);
}

#endif // CALCULATE_H
