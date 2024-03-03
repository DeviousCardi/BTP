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
    void Thn(int n,char a,char b,char c);
    int n,i,steps;
    scanf("%d",&n);
    char a='A';
    char b='B';
    char c='C';
  Thn(n,a,b,c);
	return 0; }
void Thn(int n,char a,char b,char c) {
    if(n==0)
    return;
    else
    if(n==1) {
        move(a,b);
        move(b,c); }
    else {
        Thn(n-1,a,b,c);
        Thn(n-1,a,b,b);
        Thn(n-1,b,c,a); } }