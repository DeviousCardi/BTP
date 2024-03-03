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
void hanoi (char a,char b,char c,int n){
    if(n==1){
        if(a=='A' && c=='C'){
          move(a,b);
          move(b,c); }
        else
            move(a,c);
        return; }
    if(a=='A' && c=='C'){
    hanoi(a,b,c,n-1);
    move(a,b);
    hanoi(c,b,a,n-1);
    move(b,c);
    hanoi(a,b,c,n-1); }
    else{
        hanoi(a,c,b,n-1);
        move(a,c);
        hanoi(b,a,c,n-1); } }
int main() {
	int n;
	scanf("%d",&n);
	if(n==0)
	  return 0;
	hanoi('A','B','C',n);
	return 0; }