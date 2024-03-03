#include <stdio.h>
#include <stdlib.h>
void hanoi(int n,char A,char B,char C){
    if(n==0)
    return ;
    hanoi(n-1,A,B,C); }
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
	return 0; }