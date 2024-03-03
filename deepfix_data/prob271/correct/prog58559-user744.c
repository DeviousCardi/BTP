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
void hanoi(int n1, char a, char b, char c,int n2) {
    if(n1==0)
    return;
    if(n2==0) {
        hanoi(n1-1,a,b,c,0);
        move(a,b);
        hanoi(n1-1,c,b,a,1);
        move(b,c);
        hanoi(n1-1,a,b,c,1); }
    else {
        hanoi(n1-1,a,c,b,1);
        move(a,c);
        hanoi(n1-1,c,b,a,1); } }
int main() {
    int n;
    scanf("%d",&n);
    char a='A';
    char b='B';
    char c='C';
    hanoi(n,a,b,c,0);
	return 0; }