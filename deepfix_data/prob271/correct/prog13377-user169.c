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
    void Thn(int n,char a,char x,char b,char c);
    int n;
    scanf("%d",&n);
    char a='A',b='B',c='C';
  Thn(n,a,b,b,c);
	return 0; }
void Thn(int n,char a,char x,char b,char c) {
    if(n==0)
    return;
    else
    if(n==1) {
        move(a,x);
        move(b,c); }
    else {
        Thn(1,a,b,b,c);
        Thn(1,a,b,c,a);
        Thn(1,b,c,a,b);
        Thn(1,b,c,a,b);
        move(b,c); } }