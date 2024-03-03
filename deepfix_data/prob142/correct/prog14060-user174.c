#include <stdio.h>
#include <stdlib.h>
void move(char, char);
void Hanoi(int n,char A,char B, char C){
    move(A,B);
    if(n==0)
    return;
    Hanoi(n-1,B,C,A);
    if(!(n==1 && C=='C'))
    Hanoi(n-1,C,A,B); }
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
    int N;
    scanf("%d",&N);
    if (N==0)
    return 0;
	Hanoi(N,'A','B','C');
	return 0; }