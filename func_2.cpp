#include "calc.h"
bool itc_More(string a, string b) {
    int i = 0;
    a = itc_Mabs(a);
    b = itc_Mabs(b);
    if (itc_Len(a) == itc_Len(b)) {
        while ((i < itc_Len(a)) && (a[i] == b[i])) i += 1;
        if (i == itc_Len(a)) {return false;}
        else {return a[i]>b[i];}
    } else {
        return itc_Len(a) > itc_Len(b);}} //сравнение двух чисел по модулю(проверка)

string itc_Get(string s,int a, int b) {
    string c="";
    for (int i = a;i <= b;i++) c+=s[i];
return c;} //подстрока строки с начиная с символа а до символа б

string itc_Rep(string s,int c) {
    string res="";
    for (int i = 1;i <= c;i++) res += s;
return res;} //повторяет строку s с раз

string itc_Psub(string a, string b) {
    a = itc_Mabs(a);
    b = itc_Mabs(b);
    int k = 0;
    string c="";
    for (int i = 0;i < itc_Len(b);i++) {
        if (itc_Conv(a[itc_Len(a)-i-1]) < itc_Conv(b[itc_Len(b)-i-1])) {
            c = itc_Rconv(10 + itc_Conv(a[itc_Len(a)-i-1]) - itc_Conv(b[itc_Len(b)-i-1])) + c;
            int j = i + 1;
            while (a[itc_Len(a)-j-1]=="0"[0]) j += 1;
        a= itc_Get(a,0,itc_Len(a)-j-2)+itc_Rconv(itc_Conv(a[itc_Len(a)-j-1])-1)+itc_Rep("9",j-i-1) + itc_Get(a,itc_Len(a)-i-1,itc_Len(a)-1);}
        else c = itc_Rconv(itc_Conv(a[itc_Len(a)-i-1]) - itc_Conv(b[itc_Len(b)-i-1])) + c;}
    c = itc_Get(a,0,itc_Len(a) - itc_Len(b)-1) + c;
    while ((k < itc_Len(c)-1) && (c[k]=="0"[0])) k+=1;
return itc_Get(c,k,itc_Len(c)-1);} //вычитает модули чисел

string itc_Padd(string a,string b) {
    a = itc_Mabs(a);
    b = itc_Mabs(b);
    int pro=0;
    int left=0;
    string c="";
    if (itc_Len(a) < itc_Len(b)) {
        c = a;
        a = b;
        b = c;
        c = "";}
    for (int i = 0;i < itc_Len(b);i++) {
        pro = itc_Conv(a[itc_Len(a)-i-1]) + itc_Conv(b[itc_Len(b)-i-1]) + left;
        left=0;
        if (pro>=10) {
            left=1;
            pro-=10;}
        c = itc_Rconv(pro)+c;}
    for (int i = itc_Len(b);i < itc_Len(a);i++) {
        pro = itc_Conv(a[itc_Len(a)-i-1]) + left;
        left=0;
        if (pro>=10) {
            left=1;
            pro-=10;}
        c = itc_Rconv(pro) + c;}
    if (left != 0) c = itc_Rconv(left) + c;
    while ((c[0] == "0"[0]) && (c != "0")) {
            c = itc_Get(c, 1, itc_Len(c) - 1);}
return c;}
