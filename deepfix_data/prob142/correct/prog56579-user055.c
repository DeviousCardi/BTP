#include <stdio.h>
#include <stdlib.h>
char a='A',b='B',c='C';
void move(char From, char To) {
    const int NumPerLine = 8;
    static int num = 0;
    if (num%NumPerLine == 0) {
        printf("\n%5d: ", num); }
    else {
        printf(" "); }
    printf("%c->%c", From, To);
    num++; }
void print(int m, char From, char To) {
    if(m==1 && From==a&&To==c) {
        move(a, b);
        move(b,c); }
    else if(m==1&& From==c&& To==a)
    move(c,a);
    else {
        print(m-1,a,c);
        move(a,b);
        print(m-1,c,a);
        move(b,c);
        print(m-1,a,c); } }
int main() {
	int n;
	scanf("%d",&n);
	if(n==0)
	printf(" ");
	else
	print(n,a,c);
	return 0; }