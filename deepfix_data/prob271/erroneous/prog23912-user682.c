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
void solve(char A, char B, char C, int n) {
    if(n==0)
    return;
    else if(n==1) {
        move(A, B);
        move(B, C); }
    else
    while(n!=1) {
        solve(B, A, C, n-1);
        n-- } }
int main() {
	int n;
	scanf ("%d",&n);
	solve('A', 'B', 'C', n);
	return 0; }