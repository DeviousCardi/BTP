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
int han(int a, int b, int c) {
    if(a>b)
    move('A','C');
    return(a-1,b+1,c); }
int main() {
	int n;
	scanf("%d",&n);
	return 0; }