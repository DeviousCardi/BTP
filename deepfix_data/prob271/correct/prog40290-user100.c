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
int main() {
    int n;
scanf("%d",&n);
char a='A',b='B',c='C';
hanoi(n,a,c,b);
return 0;
	return 0; }
void hanoi(int n,int a,int c,int b) {
if(n==0) {
return; }
else if(n==1) {
    hanoi(n-1,a,b,0);
    move(a,b);
hanoi(n-1,b,c,0);
move(b,c); }
else{
hanoi(n-1,a,b,0);
move(a,b);
hanoi(n-1,b,c,0);
move(b,c);
hanoi(n-1,b,c,a);
move(b,c); } }