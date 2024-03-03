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
	int N,i;
	char A='A',B='B',C='C';
	scanf ("%d",&N);
	int *a,*b,*c;
	a=(int*)malloc(N*sizeof(int));
	b=(int*)malloc(N*sizeof(int));
	c=(int*)malloc(N*sizeof(int));
	for (i=1;i<=N;i++) {
	    *(a+i-1)=i; }
	move (A,B);
	return 0; }