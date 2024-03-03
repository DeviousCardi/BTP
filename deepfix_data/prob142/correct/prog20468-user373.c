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
	int num,i;
	char A, C;
	scanf("%d", &num);
	for(i=0; i<=num; i++){
	    if(num==0)
	    break;
	    else
	    move(5, 4); }
	return 0; }