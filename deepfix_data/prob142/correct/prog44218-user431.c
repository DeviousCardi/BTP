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
char convertchar(int a) {
	if(a%3==0)
		return 'A';
	else if(a%3==1)
		return 'B';
	else if(a%3==2)
		return 'C'; }
void hanoi(int n, int f) {
    if(n==1) {
	 		move(convertchar(f), convertchar(f+1));
	 		return; }
    hanoi(n-1, f);
    hanoi(n-1, f+1);
    hanoi(1, f);
    hanoi(n-1, f+2);
    hanoi(1, f+1);
    hanoi(n-1, f);
    hanoi(n-1, f+1); }
int main() {
	int n;
	scanf("%d", &n);
	if(n==0) {
	    printf("0\n");
	    return 0; }
	if(n==1) {
		move(convertchar(0), convertchar(2));
		return 0; }
	hanoi(n, 0);
	printf("\n");
	return 0; }