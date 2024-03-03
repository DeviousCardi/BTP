#include <stdio.h>
#include <stdlib.h>
void hanoi(int n, char a, char c, char b);
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
	char a,b,c;
	hanoi(n,a,b,c);
	return 0; }
void hanoi(int n, char a, char c, char b) {
    if(n==0) printf(" ");
    printf("A-B);
    hanoi(n-1,a,b,c);
    prinf("B->C");
    hanoi(n-1,b,c,a);
    printf("C->A");
    hanoi(n-1,c,a,b);
    printf("A->B");
    hanoi(n-1,a,b,c);
    print("B->C");
    hanoi(n-1,b,c,a); }