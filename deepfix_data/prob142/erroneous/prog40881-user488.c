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
int recursive(int n) {
    if(n==0)
    return 0;
    if(n==1);
    return (move(a,b)&&move(b,c));
    else
    return recursive(n-1); }
int main() {
  int n;
  scanf("%d",&n);
  recursive(n);
	return 0; }