#include <stdio.h>
#include <stdlib.h>
char A,B,C;
void move(char From, char To) {
    const int NumPerLine = 8;
    static int num = 0;
    if (num%NumPerLine == 0) {
        printf("\n%5d: ", num); }
    else {
        printf(" "); }
    printf("%c->%c", From, To);
    num++; }
void rep () {
    move (A,B);
    move (C,B);
    move (B,C); }
void hanoi (int n) {
    if (n==0) {
        printf ("no moves");
        return; }
    if (n==1) {
        move (A,B);
        move (B,C);
        return; }
    if (n>1) {
        hanoi (1);
        int i;
        for (i=1;i<n;i++) {
            rep (); } } }
int main() {
	int n;
	scanf ("%d",&n);
	hanoi (n);
	return 0; }