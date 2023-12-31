#include <iostream>
#include <stdarg.h>
#include "MyNS.h"
using namespace std;
using namespace MyNameSpace;

//EX.1
//Задать целочисленный массив, состоящий из элементов 0 и 1. Например: [ 1, 1, 0, 0, 1, 0, 1, 1,
//0, 0 ]. Написать функцию, заменяющую в принятом массиве 0 на 1, 1 на 0 (** без применения
//if-else, switch, () ? :);

//EX.2
//Задать пустой целочисленный массив размером 8. Написать функцию, которая с помощью
//цикла заполнит его значениями 1 4 7 10 13 16 19 22;

//EX.3
//Написать функцию, в которую передается не пустой одномерный целочисленный массив,
//функция должна вернуть истину если в массиве есть место, в котором сумма левой и правой
//части массива равны. Примеры: checkBalance([1, 1, 1, || 2, 1]) → true, checkBalance ([2, 1, 1, 2,
//1]) → false, checkBalance ([10, || 1, 2, 3, 4]) → true. Абстрактная граница показана символами ||,
//эти символы в массив не входят

//EX.4
//Написать функцию, которой на вход подаётся одномерный массив и число n (может быть
//положительным, или отрицательным), при этом функция должна циклически сместить все
//элементы массива на n позиций. 

//EX.5
//Написать функцию из первого задания так, чтобы она работала с аргументом переменной
//длины.

//EX.6
//Написать все функции в отдельных файлах в одном пространстве имён, вызвать их на
//исполнение в основном файле программы используя указатели на функции.

int (*fx)();//проверка

int main(){

fx = voo; //проверка

//EX.1
    void (*fu1)(int*, int);
    fu1 = poo;
    int a = 5;
    int array[a] = {0, 1, 0, 1, 1};

    (*fu1)(array, a);
    //poo(array, a);
/////////////////////////////////////////////////

//EX.2
    void (*fu2)(int*, int);
    int rt = 8;
    int arr[rt];
    fu2 = foo;

    (*fu2)(arr, rt);
    //foo(arr,8);
//////////////////////////////////////////////

//EX.3
/*
    void (*fu3)(int*, int);
    fu3 = soo;
    int d = 4;
    int array_2[d] = {0,1,2,3};

    (*fu3)(array_2, d);   
    //soo(array_2, d);
*/
////////////////////////////////////////////

//EX.4
/*
void (*fu4)(int*, int, int);
fu4 = hoo;
int nn = 8;
int arr3[nn] = {0, 1, 2, 3, 4, 5, 6, 7};

    (*fu4)(arr3, nn, -10);
    //hoo(arr3, nn, -10);
    
    for(int k=0; k<nn; k++){

        cout << arr3[k] << endl;
    }
    */
///////////////////////////////////////////

//EX.5
/*
void (*fu5)(int*, int);
fu5 = poo2;
int ss = 5;
    int array22[ss] = {0, 1, 0, 1, 1};

    (*fu5)(array22, ss);
    //poo2(array22, ss);
*/
//////////////////////////////////////

//EX.6
cout << (*fx)() << endl; //проверка
/////////////////////////////

return 0;
}
