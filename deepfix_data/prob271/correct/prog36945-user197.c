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
void hanoi(char a,char b,char c,int n) {
    if(n==0)
    return;
    else {
    hanoi(a,b,c,n--);
    hanoi(b,c,a,n--);
    move(a,b); } }
int main() {
	int n;
	scanf("%d",&n);
	hanoi('A','B','C',n);
	return 0; }