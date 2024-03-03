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
void tower2(int n);
void tower1(int n)
{ if(n==0)return;
 if(n==1){move('C','A');return;}
 tower1(n-1);
 move('C','B');
 tower2(n-1);
 move('B','A');
 tower1(n-1);
 return; }
void tower2(int n){
if(n==0)return;
if(n==1)
{move('A','B');move('B','C');
return;}
tower2(n-1);
move('A','B');
tower1(n-1);
move('B','C');
tower2(n-1);
return; }
int main() {
	int n;
	scanf("%d",&n);
	tower2(n);
	return 0; }