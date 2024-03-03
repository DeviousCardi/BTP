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
    char a='A',b='B',c='C';
    int n;
    scanf("%d\n",&n);
    move(a,b);
    move(b,c);
    move(a,b);
    move(c,a);
    move(b,c);
    move(a,b);
    move(b,c);
    move(a,b);
	return 0; }