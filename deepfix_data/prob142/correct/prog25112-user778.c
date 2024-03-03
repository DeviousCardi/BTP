#include <stdio.h>
#include <stdlib.h>
void move(char From,char To);
void f(int n,char a,char b,char c){
    if(n==0)return;
     else
     move(a,b); }
void hanoi(int n,char a,char b,char c){
    if(n==0)
    return;
    if(n==1){
        move(a,b);
        move(b,c); }
    else{
        hanoi(n-1,a,b,c);
        f(n-1,a,b,c);
        f(n-1,c,a,b);
        f(n-1,b,c,a);
         f(n-2,a,b,c);
        f(n-2,c,a,b);
        f(n-2,b,c,a);
        hanoi(n-1,a,b,c); } }
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