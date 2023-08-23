#include <iostream>
using namespace std;

namespace MyNameSpace {

   //проверка////////////
   int voo(){
      int a = 6;
    return a;
   }
   //проверка////////////

//EX.1
void poo(int *f, int c){

    for(int i = 0; i < c; i++){

        f[i] = !f[i];
       // cout << f[i] <<endl;
    } 
}
///////////////////////////////////////////////////

//EX.2
    void foo (int *p_arr, int size_arr){

         for (int i = 0, g = 1; i < size_arr; i++, g += 3){
            
            p_arr[i] = g;
            //cout << p_arr[i] << endl;
        }
    }
/////////////////////////////////////////////////

//EX.3
/*
   void soo (int *p_array2, int p_array2_size){
         int sum1 = 0;
         int sum2 = 0;

            for(int i = 0; i < p_array2_size; i++){
               sum1 += p_array2[i];

               cout << p_array2[i] << endl;
               cout << "sum1 = " << sum1 << endl;

               for (int j = p_array2_size - 1; j > i; j--){
                  sum2 += p_array2[j];

                  cout << "sum2 = " << sum2 << endl;
                  cout << p_array2[j] << endl;
               }
               if (sum1 == sum2){
                  cout << sum1 << " равно " << sum2 <<endl;
               }
               sum2 = 0;
            }
   }
    */ 
///////////////////////////////////////////////

//EX.4
void hoo(int *p_array3, int array3_size, int some){

    int box;
    bool oper = false;
    if (some > 0){
        oper = true;
    }

    if (oper){

        for(int i = 0; i < some; i++){
            
            box = p_array3[array3_size-1];

            for(int r = 1; r < array3_size; r++){

                p_array3[array3_size-r] = p_array3[array3_size-(r+1)];    

            }
            p_array3[0] = box;
        }
    }
    else {

        for(int i = 0; i > some; i--){
            
            box = p_array3[0];

            for(int r = 0; r < array3_size; r++){

                p_array3[r] = p_array3[r+1];    

            }
            p_array3[array3_size-1] = box;
        }
    }
}
///////////////////////////////////////////

//EX.5
void poo2(int *f, ...){

   va_list (ap);
   va_start (ap,*f);
   int argument = va_arg(ap, int);
   
   for(int i = 0; i < argument; i++){
        
      f[i] = !f[i];
      cout << f[i] <<endl;
   } 
   va_end(ap);
}
/////////////////////////////////////
}