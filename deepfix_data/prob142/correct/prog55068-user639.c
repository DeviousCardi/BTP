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
void hanoi(int n,char a, char b, char c){
    if(n==1){
        if(a=='A'&&b=='B'){
            hanoi(1,a,b,c); } } }
int main() {
    int n;
    char A,B,C;
    scanf("%d",&n);
    if(n==0)
    printf(" ");
    else
    move(A,B);
	return 0; }