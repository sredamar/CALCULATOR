#include "calc.h"
int itc_Len(string s) {
    int res=0;
    string e="";
    while (s!=e) {
        e+=s[res];
        res+=1;}
    return res;}

int itc_Conv(char s) {
    string t="0123456789";
    int res=0;
    while (t[res]!=s) {
        res+=1;}
    return res;} //цифра из символа

char itc_Rconv(int x) {
    return "0123456789"[x];} //символ из цифры

bool itc_Neg(string s){
    return (s[0]=="-"[0]);} //проверяет отрицательность числа

string itc_Mabs(string s) {
    if (itc_Neg(s)) {
        string res="";
        for (int i = 1;i < itc_Len(s);i++){
            res+=s[i];}
        return res;}
    return s;} //модуль числа
