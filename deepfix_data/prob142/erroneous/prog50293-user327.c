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
void Hanoi(int n,char from,char to)
    {   if(n==0)return;
        if(n==1 &&
        (top-from==1)
        move(from,to);
        else {
            Hanoi(n-1,'A','B');
            Hanoi(n-1,'B','C');
            move('A','B');
            Hanoi(n-1,'C','A');
            Hanoi(n-1,'A','B'); } }
int main() {
	int n;
	scanf("%d",&n);
	Hanoi(n,'A','B');
	Hanoi(n,'B','C');
	return 0; }