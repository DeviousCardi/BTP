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
void hanoi(int n,char a,char c) {
    char b;
    if(n==0)
        return;
    if(n==1)
        {   a='A',c='C',b='B';
            move(a,b);
            move(b,c); }
    else
        {   b='B';
            hanoi(n-1,a,b);
            hanoi(n-1,b,c);
            move(a,b);
            hanoi(n-1,c,a);
            move(b,c);
            hanoi(n-1,a,c); } }
int main() {
    int n;
    char a='A',c='C',b='B';
    scanf("%d",&n);
    hanoi(n,a,c);
	return 0; }