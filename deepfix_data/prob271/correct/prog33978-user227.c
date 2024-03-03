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
 void moves(N)
 {if(N==1)
 {move('A','B');
 move('B','c');}
 else if(N==0) ;
 else
    moves(N-1); }
int main() {;
int n;
scanf("%d",&n);
moves(n);
	return 0; }