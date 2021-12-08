#ifndef CALC_H_INCLUDED
#define CALC_H_INCLUDED
#include <iostream>
#include <string>

using namespace std;

int itc_Len(string s);
int itc_Conv(char s); //symbol to int
char itc_Rconv(int x); //числа нормальные в строки дебильные
bool itc_Neg(string s);
string itc_Mabs(string s);
bool itc_More(string a, string b);
string itc_Get(string s,int a, int b); //podstroka
string itc_Rep(string s,int c); //povtor str
string itc_Psub(string a, string b);
string itc_Padd(string a,string b);
string itc_Fsub(string a, string b);
string itc_Fadd(string a, string b);
string itc_Sub(string a,string b);
string itc_Add(string a,string b);
string itc_Brconv(int x); //str to int
string itc_Pmult(string a, string b);
string itc_Fmult(string a, string b);
string itc_Mult(string a, string b);
string itc_Pdivide(string a, string b, string sign);
string itc_Fdivide(string a, string b);
string itc_Divide(string a, string b);
void itc_Menu();
void itc_Mcout(string a);
bool itc_IsDigit(char c);
void itc_Giraff();

#endif // CALC_H_INCLUDED
