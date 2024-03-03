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
int Hanoi(int n,int k, char From, char To) {
    if(k==1) {
        move(From,To);
        if(n==1) {
            move('B','C');
            return 0; } }
    else {
        Hanoi(n,k-1,'A','B');
        Hanoi(n,k-1,'B','C');
        move('A','B');
        Hanoi(n,k-1,'C','A');
        move('B','A');
        Hanoi(n,k-1,'A','B');
        Hanoi(n,k-1,'B','C'); }
    return 0; }
int main() {
    int n,i;
    scanf("%d",&n);
    i=Hanoi(n,n,'A','B');
	return 0; }