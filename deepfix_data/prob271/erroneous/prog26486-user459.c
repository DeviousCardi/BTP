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
    int n,c[15],b[15];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    c[i]=b[i]=0;
    for(i=0;i<n;i++) {
        if(b[i]<i) }
	return 0; }