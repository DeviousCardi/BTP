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
 void hanoi (int t) {
     if (t==1) }
int main() {
	int t;
	scanf("%d",&t); {
	    hanoi(t); }
	return 0; }