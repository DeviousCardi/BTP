#include <stdio.h>
#include <stdlib.h>
char a='A',b='B',c='C';
void move(char From, char To) {
    const int NumPerLine = 8;
    static int num = 0;
    if (num%NumPerLine == 0) {
        printf("\n%5d: ", num); }
    else {
        printf(" "); }
    printf("%c->%c", From, To);
    num++; }
void Take(int n, char x, char y){
  if(n==1){move(x,y); return;}
  char z=b;
  if(((x==a)&&(y==b))||((x==b)&&(y==a))) z=c;
  else if(((x==b)&&(y==c))||((x==c)&&(y==b))) z=a;
  else if(((x==a)&&(y==c))||((x==c)&&(y==a))) z=b;
  Take(n-1,x,z);
  Take(1,x,y);
  Take(n-1,z,y);
  return; }
int main() {
int n;
scanf("%d",&n);
if(!n) return;
if(n==1){move(a,b);move(b,c); return 0;}
Take(n,a,c);
	return 0; }