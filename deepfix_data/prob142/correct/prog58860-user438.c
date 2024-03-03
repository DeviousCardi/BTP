#include <stdio.h>
#include <stdlib.h>
void move(char A, char C) {
    const int NumPerLine = 8;
    static int num = 0;
    if (num%NumPerLine == 0) {
        printf("\n%5d: ", num); }
    else {
        printf(" "); }
    printf("%c->%c", A, C);
    num++; }
void hanoi(int n,char A,char C,char B) {
    if(n==0)
    return;
    else {
     hanoi(n-1,A,B,C); {
         move(A,C); }
    hanoi(n-1,B,C,A); } }
int main() {
    char A,B,C;
    int n;
    scanf("%d",&n);
    hanoi(n,A,C,B);
	return 0; }