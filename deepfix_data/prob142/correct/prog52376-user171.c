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
void hanoi(int n,char a,char c,char b) {
    if(n==0)
        return 0;
    if(n==1) {
            move(a,b);
            move(b,c); }
    else {
            hanoi(n-1,a,b,c);
            hanoi(n-1,b,c,a);
            hanoi(n-1,a,c,b); } }
int main() {
    int n;
    char a='A',c='C',b='B';
    scanf("%d",&n);
    hanoi(n,a,c,b);
	return 0; }