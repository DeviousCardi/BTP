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
int main() {
   char From[10];
    char To[10];
int n;
scanf("%d",&n);
scanf("%c %c",&From,&To);
 move (From,To);
	return 0; }