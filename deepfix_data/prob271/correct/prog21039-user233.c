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
void recurr(char a,char b,char c) {
    move(a,b);
    move(b,c);
    recurr(b,c,a); }
int main() {
	int n;
	scanf("%d\n",&n);
	recurr('A','B','C');
	return 0; }