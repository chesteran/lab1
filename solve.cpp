#include<cstdlib>
#include<fstream>
#include<iostream>
#include<ctime>
#include"Sudoku.h"
using namespace std;
int main(){
Sudoku ss;
ss.readIn();
ss.solve();
return 0;


}
