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
void han(int a, int b, int c) {
    if(a>b && a>c)
    move('A','B'); }
int main() {
	int n;
	scanf("%d",&n);
    han(n,0,0);
	return 0; }