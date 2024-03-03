#include <stdio.h>
#include <stdlib.h>
int i,j,k,a[15],b[15],c[15];
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
	j=k=0;
	for(i=0;i<n;i++)
	    a[i]=i+1;
	return 0; }