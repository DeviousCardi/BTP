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
	int n;
	scanf("%d",&n);
	hanoi(n,'A','B','C');
	hanoi(n,'B','C');
	return 0; }
void hanoi(int n,char from,char to,char aux){
    if(n==1) {
        move(from,to);
        return; }
    hanoi(n-1,from,to,aux);
    hanoi(n-1,to,aux,from);
    hanoi(1,from,to,aux);
    hanoi(n-1,aux,from,to);
    hanoi(n-1,from,to,aux); }