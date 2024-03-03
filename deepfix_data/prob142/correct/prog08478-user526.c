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
void hanoi(char from,char tmp,char to,int n) {
    if(n>0) {
        hanoi(from,tmp,to,n-1);
        move(from,tmp);
        hanoi(tmp,to,from,n-1);
        move(tmp,to); } }
int main() {
    int n;
    scanf("%d",&n);
    hanoi('A','B','C',n);
	return 0; }