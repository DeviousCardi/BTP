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
int han(int N,char a,char b,char c) {
    if(N==0) {move(a,c);}
    if(N==1) { move(a,b);move(b,c); }
   else  return han(N-1,a,b,c); }
int main() {
	int N;
	scanf("%d",&N);
    char a='A';
    char b='B';
    char c='C';
    han(N,a,b,c);
	return 0; }