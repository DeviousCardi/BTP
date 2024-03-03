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
int  Hanoi(int n,char A,char B,char C) {
    int count=0;
 	if (n==0)
	return 0;
	if(n==1){
	printf("%c->%c ",A,B);
	printf("%c->%c ",B,C); }
	Hanoi(n-1,A,B,C);
	count=count++;
	if(count==8)
	printf("8:%c->%c ",A,B);
	Hanoi(n-1,C,A,B);
	return 0; }
int main() {
    int N;
    char A='A',B='B',C='C';
	scanf("%d",&N);
	Hanoi(N,A,B,C);
	return 0; }