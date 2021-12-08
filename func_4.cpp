#include "calc.h"
string itc_Pmult(string a, string b) {
    a = itc_Mabs(a);
    b = itc_Mabs(b);
    string c="0", g = "";
    if (itc_Len(a) < itc_Len(b)) {
        c = a;
        a = b;
        b = c;
        c = "";}
    for (int i = 0;i < itc_Len(b);i++) {
        for (int j = 0; j < itc_Len(a);j++) {
        g = itc_Brconv(itc_Conv(b[itc_Len(b)-i-1]) * itc_Conv(a[itc_Len(a)-j-1])) + itc_Rep("0",i + j);
        if (g[0] != "0"[0]) c = itc_Padd(g, c);}}
        while ((c[0] == "0"[0]) && (c != "0")) {
            c = itc_Get(c, 1, itc_Len(c) - 1);}
    return c;}

string itc_Fmult(string a, string b) {
    int sign = 1;
    if (itc_Neg(a)) sign *= -1;
    if (itc_Neg(b)) sign *= -1;
    if (sign == -1) return "-" + itc_Pmult(a,b);
    else return itc_Pmult(a,b);}

string itc_Mult(string a, string b) {
    string res = itc_Fmult(a,b);
    if (itc_Mabs(res)=="0") return "0";
    else return res;}

string itc_Pdivide(string a, string b, string sign){
    a = itc_Mabs(a);
    b = itc_Mabs(b);
    string c = "";
    string z = "";
    int i = 0;
    if (itc_Len(b)<=itc_Len(a)){
        z = itc_Get(a,0,itc_Len(b)-1);
        while (not itc_More(itc_Pmult(itc_Brconv(i),b),z)) i++;
        i--;
        z = itc_Psub(z,itc_Pmult(itc_Brconv(i),b));
        c = c+itc_Brconv(i);
        for (int j=itc_Len(b);j<itc_Len(a);j++){
            if (z=="0") z=a[j];
            else z=z+a[j];
            i = 0;
            while (not itc_More(itc_Pmult(itc_Brconv(i),b),z)) i++;
            i--;
            z = itc_Psub(z,itc_Pmult(itc_Brconv(i),b));
            c = c+itc_Brconv(i);}
        if (c[0]=="0"[0]) c=itc_Get(c,1,itc_Len(c)-1);
        return sign + c+" ("+ sign + z+")";}
    return "0 ("+a+")";}

string itc_Fdivide(string a, string b) {
    int sign = 1;
    if (itc_Neg(a)) sign *= -1;
    if (itc_Neg(b)) sign *= -1;
    if (sign == -1) return itc_Pdivide(a,b, "-");
    else return itc_Pdivide(a,b, "");}

string itc_Divide(string a, string b) {
    if (itc_Mabs(b)=="0") {
        return "CANNOT DIVIDE BY ZERO!";}
    else {return itc_Fdivide(a,b);}}


