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
void hanoi1(char f,char m,char l,int n) {
    if(n==1)
    move(f,l);
    else {
        hanoi1(f,m,l,n-1);
        move(f,m);
        hanoi1(l,m,f,n-1);
        move(m,l); }
    move(f,m);
    move(m,l); }
void hanoi(char f,char m,char l,int n) {
    if(n==0);
    else if(n==1) {
        move(f,m);
        move(m,l); }
    else {
        hanoi(f,m,l,n-1);
        move(f,m);
        hanoi1(l,m,f,n-1);
        move(f,m);
        move(m,l); } }
int main() {
	int n;
	scanf("%d",&n);
	hanoi('A','B','C',n);
	return 0; }