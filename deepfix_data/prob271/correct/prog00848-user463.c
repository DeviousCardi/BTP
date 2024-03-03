#include <stdio.h>
#include <stdlib.h>
char a='A',b='B',c='C';
void move(char From, char To) {
    const int NumPerLine = 8;
    static int num = 0;
    if (num%NumPerLine == 0) {
        printf("\n%5d: ", num); }
    else {
        printf(" "); }
    printf("%c->%c", From, To);
    num++; }
void hanoik(int n,char a,char b,char c) {
    if(n==0)
    return;
    if(n==1)
    {move(a,c);return;}
    hanoi(n-1,a,b,c);
    move(a,c);
    hanoik(n-1,b,a,c); }
void hanoi(int n,char a,char b,char c) {
    if(n==0)
    return;
    if(n==1) {
        move(a,b);
        move(b,c);
        return; }
    hanoi(n-1,a,b,c);
    move(a,b);
    hanoik(n-1,c,b,a);
    move(b,c);
    hanoi(n-1,a,b,c); }
int main() {
    int n;
    scanf("%d",&n);
    hanoi(n,'A','B','C');
	return 0; }