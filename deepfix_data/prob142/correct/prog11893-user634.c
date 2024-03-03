#include <stdio.h>
#include <stdlib.h>
int i=0,n;
void move(char From, char To) {
    const int NumPerLine = 8;
    static int num = 0;
    if (num%NumPerLine == 0) {
        printf("\n%5d: ", num); }
    else {
        printf(" "); }
    printf("%c->%c", From, To);
    num++; }
void hanoi(int a[],int b[],int c[],int n) {
    if(!n)
    return;
        hanoi(a,c,b,n-1);
        move('A','B');
        hanoi(b,a,c,n-1);
        move('B','C');
        hanoi(c,b,a,n-1);
        move('C','A'); }
int main() {
    int i;
    scanf("%d",&n);
    int a[n],b[n],c[n];
    if(!n)
    return 0;
    for(i=0;i<n;i++)
    {a[i]=i;b[i]=0;c[i]=0;}
    hanoi(a,b,c,n);
	return 0; }