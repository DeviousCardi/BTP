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
void hanoi(int n,char a,char b,char c){
    if(n==0)
        return;
    hanoi(n-1,a,b,c);
    move(a,b);
    hanoi(n-1,c,b,a);
    move(b,c);
    hanoi(n-1,a,b,c); }
int main() {
    int n;\
    scanf("%d",&n);
    char a='A';
    char b= 'B';
    char c= 'C';
    hanoi(n,a,b,c);
	return 0; }