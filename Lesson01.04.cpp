#include <iostream>
using namespace std;

//EX.1
//Написать программу, проверяющую что сумма двух чисел лежит в пределах от 10 до 20
//(включительно), если да – вывести true, в противном случае – false;

//EX.2
//Написать программу, проверяющую, является ли некоторое число - натуральным простым.
//Простое число - это число, которое делится без остатка только на единицу и себя само.

//EX.3
//Написать программу, выводящую на экран “истину”, если две целочисленные константы,
//объявленные в её начале либо равны десяти сами по себе, либо их сумма равна десяти.

//EX.4
//Написать программу, которая заполняет диагональные элементы квадратной матрицы
//единицами. Размеры матрицы нужно задать константными числами, матрицу нужно
//инициализировать нулями.

//EX.5
//Написать программу, которая определяет является ли год високосным. Каждый 4-й год
//является високосным, кроме каждого 100-го, при этом каждый 400-й – високосный. Для
//проверки работы вывести результаты работы программы в консоль

int main() {
/*
//EX.1
    int num1 = 5;
    int num2 = 5;
    int sum;

        if (10 <= (sum = num1 + num2)) {   

            if (sum <= 20) {    
                cout << "true \n";
            }
            else {
                cout << "false \n";
            }
        }
        else {
            cout << "false \n";
        }
/////////////////////////////////////

//EX.2
    int simple;
    double number;
    double check;

    int divider=1;
    int counter = 0;

    cin >> number;

    check = number;
    simple = (int) number;
    number = number - simple;

    if (simple > 1) 
    {
        if (number == 0) {
                                
            if (simple % 1 == 0) {//это сравнение можно убрать
            
                if (simple % simple == 0) {//это сравнение можно убрать                 
                        
                    for ( ; divider <= simple; ) {
                                        
                        if (simple % divider == 0) {

                            counter = ++counter;
                        }

                        divider= ++divider;
                    }
                    if (counter > 2) {
                            
                            cout << "Число " << simple << " не является натуральным простым\n";  
                    }
                    else {                            
                        cout << "Число " << simple << " является натуральным простым\n";
                    }
                }        
                else {
                    cout << "Число " << simple << " не является натуральным простым\n"; 
                }
            }
            else {                
                cout << "Число " << simple << " не является натуральным простым\n";
            }
        }
        else {
            cout << "Число " << check << " не является натуральным простым\n";
        }        
    }
    else {
        cout << "Число " << simple << " не является натуральным простым\n";
    }
/////////////////////////////////

//EX.3
const int number1 = 1;
const int number2 = 9;

#define outs cout << "Истина" << endl;

if (10 == number2){

    if (number2 == number1) {

        outs;    
    }
    else
        cout << "Error!!!" << endl;
}
else if (number1 + number2 == 10){

    outs; 
}
else
    cout << "Error!!!" << endl;
//////////////////////////////////

//EX.4
const int f = 5;
const int g = 5;
int array_3[f][g] = {0};

for (int i = 0, h = g-1; i<f; i++ ){   

    array_3[i][i] = 1;
    array_3[i][h] = 1;
    h--;
}

for (int i= 0; i<f; i++ ){

    for (int j =0; j<g; j++){
        cout << array_3[i][j] << " ";
    }
    cout << endl;
}
*/
//EX.5

int year;
cin >> year;

if (year % 4 == 0){
    if (year % 100 == 0){
        if (year % 400 == 0){
            cout << year << " - висоКОКОСНЫЙ"<< endl;
        }
        else {
        cout << "no" << endl;    
        }
    }
    else {
        cout << year << " - висоКОКОСНЫЙ"<< endl;
    }
}
else
    cout << "no" << endl;
//////////////////////////////////////////
}