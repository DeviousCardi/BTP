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
	int n,i,j,a=0,b;
	scanf("%d",&n);
	for(i='A';i<='C';i++){
	    b=i;
	    if(a==n)
	    break;
	    for(j='A';j<=i;j++){
	        move(i,j);
	        b++; }
	    a++; }
	return 0; }