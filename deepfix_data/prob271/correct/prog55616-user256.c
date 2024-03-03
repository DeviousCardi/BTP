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
void toh(int n){
    char A,B,C;
    if (n==0) printf("\0");
    else if (n==1) {
        move('A','B');move('B','C'); }
    else {
        toh(n-1);
        move('A','B');
        move('C','A');
        move('B','C');
        toh(n-1); } }
int main() {
	int n;
	scanf("%d",&n);
	toh(n);
	return 0; }