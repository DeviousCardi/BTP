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
void sol(int n);
int main() {
	int n;
	scanf("%d",&n);
	sol(n);
	return 0; }
void sol(int n){
    if(n==1) {
      move('A','B');
      move('B','C'); }
    else {
       sol(n-1); } }