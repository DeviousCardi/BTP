#include <stdio.h>
#include <stdlib.h>
void move(char From, char To) {
    if (From=='A'&&To=='C')
    return;
    const int NumPerLine = 8;
    static int num = 0;
    if (num%NumPerLine == 0) {
        printf("\n%5d: ", num); }
    else {
        printf(" "); }
    printf("%c->%c", From, To);
    num++; }
void hanoi(int n,char A,char C,char B) {
    if(n==0)
    return;
    move(A,B);
    hanoi(n-1,B,A,C);
    hanoi(n-1,A,B,C);
    move(B,C);
    hanoi(n-1,B,A,C); }
int main() {
    int x;
    scanf("%d",&x);
    hanoi(x,'A','C','B');
	return 0; }