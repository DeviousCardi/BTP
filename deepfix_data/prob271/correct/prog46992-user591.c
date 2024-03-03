#include <stdio.h>
#include <stdlib.h>
void move(char From, char To) {
    const int NumPerLine = 8;
    static int num = 0;
    if (num%NumPerLine == 0) {
        printf("\n%5d: ", num); }
    else {
        printf("%c->%c",To,From); }
    printf("%c->%c", From, To);
    num++; }
int main() {
    char A[10];
    char B;
int n;
scanf("%d",&n);
printf("%d",n);
move(A,B);
	return 0; }