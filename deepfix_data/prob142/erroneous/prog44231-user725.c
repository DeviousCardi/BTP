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
int n;
char a='A',b='B',c='C';
int main() {
    int i;
    scanf("%d",&n);
	return 0; }
int search(int pol[n]);
void count(){
    static int f=0;
    if(search(pol2)) move(b,c);
    else move (a,b);
    if(search (pol3)) move (c,a);
    else move (b,c); }