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
void all_moves(int n,char a,char b,char c ){
    if(n==0){
        return ; }
    else if(n==1){
        move(a,b);
        move(b,c);
        return; }
    else{
        all_moves(n-1,a,b,c);
        move(a,b);
        move(c,a);
        move(b,c);
        all_moves(n-1,a,b,c);
        move(a,b);
        move(c,a);
        move(a,b);
        move(c,a);
        move(b,c);
        move(c,a);
        move(b,c); } }
int main() {
	int n;
	char a='A',b='B',c='C';
	scanf("%d",&n);
	all_moves(n,a,b,c);
	return 0; }