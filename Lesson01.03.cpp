#include "Lessonstdint0103.h"
#include <iostream>
using namespace std;

//EX.1
//Написать программу, вычисляющую выражение a * (b + (c / d)) и выводящую результат с
//плавающей точкой, где a, b, c, d – целочисленные константы;

//EX.2
//Дано целое число, выведите на экран разницу между этим числом и числом 21. Если же
//заданное число больше, чем 21, необходимо вывести удвоенную разницу между этим числом
//и 21. При выполнении задания следует использовать тернарный оператор.

//EX.3
//Написать программу, вычисляющую выражение из первого задания, а переменные для неё
//инициализировать в другом файле

//EX.4
//Описать трёхмерный целочисленный массив, размером 3х3х3, указатель на значения внутри
//массива и при помощи операции разыменования вывести на экран значение центральной
//ячейки получившегося куба [1][1][1]

int main() {

//EX.1
    int a;
    int b;
    int c;
    int d;

    float result_1;

    a = 5;
    b = 6;
    c = 7;
    d = 2;

        result_1 =  (float) a * ((float) b + ((float) c / d ));

    std::cout << "EX.1 \n" << result_1 << "\n";
//////////////////////////////////   

//EX.2
    int e = 18;
    int f = 21;

    int result_2;

        e > f ? result_2 = (e - f) * 2 : result_2 = f - e;

    std::cout << "EX.2 \n" << result_2 << "\n";
////////////////////////////////////

//EX.3
    result_3 =  (float) aa * ((float) bb + ((float) cc / dd ));

    std::cout << "EX.3 \n" << result_3 << "\n";
////////////////////////////////////

//EX.4
    int *ptr;

    int array[3][3][3] = {{{ 1,  2,  3}, { 4,  5,  6}, { 7,  8,  9}},
                          {{10, 11, 12}, {13, 14, 15}, {16, 17, 18}},
                          {{19, 20, 21}, {22, 23, 24}, {25, 26, 27}}};
    
        ptr = (int*) array; // Вопрос: если array это ссылка на значение в массиве под 0 0 0 то почему его надо преобразовывать в ссылку явно?

            ptr += 13;

    std::cout << "EX.4 \n" << *ptr << "\n";

    return 0;
}