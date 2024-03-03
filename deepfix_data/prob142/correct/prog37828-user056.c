#include <stdio.h>
#include <stdlib.h>
int hanoi(int n) {
    if (n==0)
    return 0;
    else if (n-1==0)
    return 1;
    else return hanoi(n-1)*2+1; }
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