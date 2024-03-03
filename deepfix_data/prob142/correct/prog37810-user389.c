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
int toh(int n,char a,char b,char c) {
    if(n==0)
     return 0;
        toh(n-1,b,c,a);
         move(a,c);
        toh(n-1,c,a,b);
  return 0; }
int main() {
    int n,a='A',b='B',c='C';
    scanf("%d",&n);
    if(n!=0)
     toh(n,a,b,c);
	return 0; }