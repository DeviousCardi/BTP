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
void T(int n,char x,char y,char z) { }
void Tow(int n,char x,char y,char z) {
    if(n>0) {
        Tow(n-1,x,y,z);
        move(x,y);
        T(n-1,x,y,z);
        move(y,z);
        Tow(n-1,x,y,z); } }
int main() {
	char a='A',b='B',c='C';
    int N;
    scanf("%d",&N);
    Tow(N,a,b,c);
    return 0; }