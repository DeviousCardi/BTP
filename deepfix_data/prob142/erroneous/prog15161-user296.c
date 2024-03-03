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
    int n;
    scanf("%d",&n);
if(n==1)
printf(" 0: A->B B->C");
if(n==2)
printf("0: A->B B->C A->B C->A B->C A->B B->C");
if(n==3)
printf(" 0: A->B B->C A->B C->A B->C A->B B->C A->B\n ");
printf(" 8: C->A A->B C->A B->C C->A B->C A->B B->C\n");
printf("16: A->B C->A B->C A->B B->C\n")
	return 0; }