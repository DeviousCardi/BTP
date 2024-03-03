#include <stdio.h>
#include <stdlib.h>
void step (int n) {
    if (n==0);
    else {
        step(n-1);
        move('A','B');
        step(n-1);
        move('b','c');
        step(n-1); } }
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
    char a,b,c;
    a='A';
    b='B';
    c='C';
    scanf ("%d",&n);
    move (a,c);
	return 0; }