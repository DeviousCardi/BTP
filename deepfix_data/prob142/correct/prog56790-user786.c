#include <stdio.h>
#include <stdlib.h>
int steps=0;
int hanoi(int n) {
    if(n==1){return 2;}
    steps=steps+5*(hanoi(n-1))+2;
    return steps; }
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
	scanf("%d",&n);
	if(n==0){return 0;}
	printf("%d",hanoi(n));
	return 0; }