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
void hanoi(int n1, int n2, char x, char y, char z ) {
    if(n1==0)
    return;
    if(n2==0) {
        hanoi(n1-1,0,x,y,z);
    move(x,y);
        hanoi(n1-1,1,z,y,x);
    move(y,z);
        hanoi(n1-2,0,x,y,z); }
    else {
        hanoi(n1-1,1,x,z,y);
    move(x,z);
        hanoi(n1-1,1,z,y,x); } }
int main() {
    int n;
    scanf("%d",&n);
    char c1='A',c2='B',c3='C';
            hanoi(n,0,c1,c2,c3);
	return 0; }