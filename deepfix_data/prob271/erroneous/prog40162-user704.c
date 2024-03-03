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
void tower(int n,char from);
if(n==1){if (from=='A') move('A','C');
          else move('C','A');return;}
tower(n-1,'A');
move('A','B');
tower(n-1,'C');
move('B','C');
tower(n-1,'A');
return; }
int main() {
	int n;
	scanf("%d",&n);
	tower(n,'A');
	return 0; }