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
void hanoi(char A, char C, char B, int disks){
    if(disks==0) {
        return; }
    hanoi(A,B,C,disks - 1);
    move(A,B);
    move(B,C);
    move(A,B);
    move(C,B); }
int main() {
	int n;
	scanf("%d", &n);
	hanoi('A','C','B',n);
	return 0; }