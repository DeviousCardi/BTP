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
  if(val==1) {
    printf("hi");
    move('A','B');
    move('B','C'); }
   else
   printf("hi");
    return abc(val-1); }
int main() {
	int n;
	scanf("%d",&n);
	return 0; }