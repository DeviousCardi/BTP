#include <stdio.h>
#include <stdlib.h>
void move(char From,char To);
void hanoi(int n,char a,char b,char c){
    if(n==0)
    return;
    if(n==2)
    if(n==1){
        move(a,b);
        move(b,c); }
    else{
        hanoi(n-1,a,b,c);
        move(a,b);
        move(c,a);
        move(b,c);
        hanoi(n-1,a,b,c); }
    else{
        move(a,b);
        move(c,a);
        move(a,b);
        move(c,a);
        hanoi(n-1,b,c,a); } }
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
	hanoi(n,'A','B','C');
	return 0; }