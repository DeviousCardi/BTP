#include <stdio.h>
#include <stdlib.h>
int n;
void move(char From, char To) {
    const int NumPerLine = 8;
    static int num = 0;
    if (num%NumPerLine == 0) {
        printf("\n%5d: ", num); }
    else {
        printf(" "); }
    printf("%c->%c", From, To);
    num++; }
void hanoi(int a) {
if(a==0)
return;
if(a==1)
move('A','B');
move('B','C'); }
int main() {
	scanf("%d",&n);
	hanoi(n) ;
	return 0; }