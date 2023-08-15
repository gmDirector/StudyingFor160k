#include   <iostream>
using namespace std;

//task 1
int x=3;
char a='f';
/*string v="Hellow";*/
long s=355;
float d=45.5;
double y=3.4;
bool t=true;
//void dont_RETURN;
short int r;
long int q;
long long int w;
unsigned int f;
unsigned long int g;
unsigned long long int h;

//task 2
enum znak {krestik='x', nullik='o', cherta='_', palka='|'};
    char krest = krestik;
    char nuLL = nullik;
////////////////////////////////////
//task 3
char massiv [4];
///////////////////////////////////
//task 4
struct Play {
    struct Pole {
        char cherta = '_', stenka = '|';
    } pole;
    struct Player {
        bool turn = false;
        char krest = 'X', nuLL = 'O';
    } player1, player2;
} play;
////////////////////////////////
//task 5 
// 32-razrydnay sreda
struct STRbitlag {
    int iz_int_s : 1;
    char iz_char_s : 1;
} strbit3;

union UNbitflag {
    int iz_int_u : 1;
    char iz_char_u : 1;
} unbit3;


//////////////////////////////////
int main() {

//task 3
massiv[0] = krestik;
   massiv[1] = nullik;
    massiv[2] = cherta;
    massiv[3] = palka;
///////////////////////////////
//task 5
strbit3.iz_int_s = 1;
strbit3.iz_char_s = 1;

unbit3.iz_int_u = 1;
unbit3.iz_char_u = 1;
//////////////////////////////

std::cout << "Hello, World!\n"<<"task 2\n"<<krest<< "\n" <<nuLL<<"\n"
<<"task 3\n"<<massiv[3]<<"\n"
<<"task 4\n"<< play.player1.krest <<"\n"
<<"task 5\n"<< strbit3.iz_int_s <<"\n"<< unbit3.iz_char_u <<"\n";
return 0;
}
