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
int main()
{   char A='A',B='B',C='C';
    int n;
	scanf("%d",&n);
	tower(n,A,B,C);
	return 0; }
void tower(int n,char a,char b,char c)
{   if(n==0)return;
    if(n==1) {
    move(a,b);
    move(b,c); }
    if(n==2)
    {move(a,b);
	move(b,c);
	move(a,b);
	move(c,a);
	move(b,c);
	move(a,b);
	move(b,c); }
  if(n>2){
    tower(n-1,b,a,c);
    move(a,b);
    move(b,c);
    tower(n-1,a,b,c);} }