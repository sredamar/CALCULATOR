#include "calc.h"

void itc_Mcout(string a){
    for (int i=0;i<itc_Len(a);i++){
        cout << a[i];
        _sleep(30);}
    cout << endl;}

bool itc_IsDigit(char c){
  string f = "0123456789";
  int i = 0;
  while ((i<itc_Len(f)) and (f[i]!=c)) i++;
  return i!=itc_Len(f);}

void itc_Giraff(){
itc_Mcout ( "   _    _  " );
itc_Mcout ( "  (_)  (_) " );
itc_Mcout ( "   |____|  " );
itc_Mcout ( "  (      )  " );
itc_Mcout ( "   |^ ^ |  " );
itc_Mcout ( " _______)         " );
itc_Mcout ( "( * _ * )          " );
itc_Mcout ( "(_______)          " );
itc_Mcout ( "   |  |       " );
itc_Mcout ( "   |  |      " );
itc_Mcout ( "   |  |      " );
itc_Mcout ( "   |  |      " );
itc_Mcout ( "   |  |      " );
itc_Mcout ( "   |  |________________      " );
itc_Mcout ( "  /                    \\\\ " );
itc_Mcout ( " (                      )\\\\" );
itc_Mcout ( " (                      ) \\\\" );
itc_Mcout ( "  (____________________)  (())" );
itc_Mcout ( "     | |            | |   " );
itc_Mcout ( "     | |            | |" );
itc_Mcout ( "     |_|            |_|" );
itc_Mcout ( "    (___)          (___)" );
itc_Mcout("                        ");}
void itc_Menu() {
    system("Color 01");
    itc_Mcout("MENU:\n===================================================\n1.SUMMATION / SUBTRACTION / MULTIPLICATION / DIVISION\n2.THE FUNNY ONE :0\n\n");
    itc_Mcout("please, type the number of function(1 or 2)");
    int num; cin >> num;
    if (num == 1) {
    string s="";
    string first="";
    string second="";
    string operation="";
    system("Color 05");
    itc_Mcout("please, type: first number > operation > second number:");
    cin >> s;
    int i = 1;
    while (itc_IsDigit(s[i])) i++;
    first = itc_Get(s,0,i-1);
    second = itc_Get(s,i+1,itc_Len(s)-1);
    operation = s[i];
        if (operation == "+")  itc_Mcout(s + "=" + itc_Add(first, second));
        if (operation == "-")  itc_Mcout(s + "=" + itc_Sub(first, second));
        if (operation == "*")  itc_Mcout(s + "=" + itc_Mult(first, second));
        if (operation == "/")  itc_Mcout(s + "=" + itc_Divide(first, second));}
    else if (num == 2) {
        system("Color 06");
        itc_Giraff();}}
