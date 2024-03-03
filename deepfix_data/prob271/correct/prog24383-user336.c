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
char abc(int val) {
  char A,B,C;
  if(val==1) {
    move(A,B);
    move(B,C); }
    return abc(val-1); }
int main() {
	int n;
	scanf("%d",&n);
	abc(n);
	return 0; }