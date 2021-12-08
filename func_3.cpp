#include "calc.h"
string itc_Fsub(string a, string b) {
    if (itc_Neg(a)) {
        if (itc_Neg(b)){
            if (itc_More(a,b)) return "-" + itc_Psub(a,b);
            else return itc_Psub(b,a);
        } else {
            return "-" + itc_Padd(a,b);}
    } else {
        if (itc_Neg(b)) return itc_Padd(a,b);
        else {
            if (itc_More(b,a)) return "-" + itc_Psub(b,a);
            else return itc_Psub(a,b);}}}

string itc_Fadd(string a, string b) {
    if (itc_Neg(a)) {
        if (itc_Neg(b)) return "-" + itc_Padd(a,b);
        else {
            if (itc_More(a,b)) return "-" + itc_Psub(a,b);
            else return itc_Psub(b,a);}}
    else {
        if (itc_Neg(b)) {
            if (itc_More(a,b)) return itc_Psub(a,b);
            else return "-" + itc_Psub(b,a);}
        else return itc_Padd(a,b);}}

string itc_Sub(string a,string b) {
    string res = itc_Fsub(a,b);
    if (itc_Mabs(res) == "0") return "0";
return res;}

string itc_Add(string a,string b) {
    string res = itc_Fadd(a,b);
    if (itc_Mabs(res) == "0") return "0";
return res;}

string itc_Brconv(int x) {
    string res = "";
    while (x > 0) {
        res = itc_Rconv(x % 10) + res;
        x /= 10;}
    if (res == "") return "0";
return res;}




