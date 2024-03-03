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
int main() {
    int n;
    scanf("%d\n",&n);
    void hanoi(char a,char c,char b,int n) {
        if(n==0)
        return;
        if(n%2==0)
        move(a,c);
        hanoi(a,b,c,n-1);
        move(a,b);
        hanoi(b,c,a,n-1);
        move(b,c); }
    hanoi('A','C','B',n);
	return 0; }