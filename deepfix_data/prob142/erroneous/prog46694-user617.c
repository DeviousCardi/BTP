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
int N;
int hanoi(int N) {
    if(N==0 || N<0)
    return 0;
    else
    return 1; }
int main()
int i,n; {
    for(i=0;i<n;i++) {
        NumPerLine=NumPerLine+1; }
	printf("%d",)
	return 0; }