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
int step_hanoi(int n) {
    if(n==0)
    return -1;
    else if(n==1)
    return 2;
    else
    return 4*step_hanoi(n-1)+2; }
int main() {
	int n;
	scanf("%d",&n);
	printf("%d",step_hanoi(n));
	return 0; }