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
void Tow(int n,char x,char y,char z) {
    Tow(n-1,y,x,z);
    move(x,y);
    Tow(n-1,z,y,x); }
int main() {
	char a='a',b='b',c='c';
    int N;
    scanf("%d",&N);
    Tow(N,a,b,c)
    return 0;
	return 0; }