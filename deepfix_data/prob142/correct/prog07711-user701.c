#include <stdio.h>
#include <stdlib.h>
void move(char From, char To) {
    const int NumPerLine = 8;
    static int num = 0;
    if (num%NumPerLine == 0) {
        printf("\n%5d: ", num); }
    else {
        printf(" "); }
    printf("%c->%c", From, To);
    num++; }
void T(int n,char x,char y,char z) {
    if(n==1) {
        move(z,x); }
    if(n>1) {
        T(n-1,x,y,z);
        move(x,y);
        T(n-1,x,y,z);
        move(y,z);
        T(n-1,x,y,z); } }
void Tow(int n,char x,char y,char z) {
    if(n==1) {
        move(x,y);
        move(y,z); }
    if(n>1) {
        Tow(n-1,x,y,z);
        move(x,y);
        Tow(n-1,z,x,y);
        move(y,z);
        Tow(n-1,x,y,z); } }
int main() {
	char a='A',b='B',c='C';
    int N;
    scanf("%d",&N);
    Tow(N,a,b,c);
    return 0; }