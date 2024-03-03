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
void h(int,char,char,char);
int main() {
	int n;
	scanf("%d",&n);
	h(n,'A','B','C');
	h(n,'B','C','A');
	return 0; }
void h(int n,char from,char to,char aux){
    if(n==1) {
        move(from,to);
        return; }
    h(n-1,from,to,aux);
    h(n-1,to,aux,from);
    h(1,from,to,aux);
    h(n-1,aux,from,to);
    h(n-1,from,to,aux); }