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
	if(n==0)
	return 0;
	else {
	    char str[n+1];
	    int i;
	    for(i=0;i<n+1;i++)
	   { str[i]=i+65;
	    printf("%c",str[i]);
	return 0; }
}}