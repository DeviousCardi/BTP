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
int hanoi(int x){
    if(x==1)
   move( A,B);
   move(char B,char C);
    else
    return hanoi(x-1); }
int main() {
	int n;
	scanf("%d",&n);
	hanoi(n);
	return 0; }