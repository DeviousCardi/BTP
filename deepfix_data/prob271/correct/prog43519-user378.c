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
void rep (char x,char y,char z) {
    move (x,y);
    move (z,y);
    move (y,z); }
void hanoi (int n, char x, char y, char z) {
    if (n==0) {
        printf ("no moves");
        return; }
    if (n==1) {
        move (x,y);
        move (y,z);
        return; }
    if (n>1) {
        hanoi (1,x,y,z);
        int i;
        for (i=1;i<n;i++) {
            rep (x,y,z); } } }
int main() {
	int n;
	char p='A';
	char q='B';
	char r='C';
	scanf ("%d",&n);
	hanoi (n,p,q,r);
	return 0; }