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
int hanoi(int n){
    if(n==0)return 1;
    if(n==1)return 2;
    else return (3*hanoi(n-1)+2); }
int main() {
	int n;
	scanf("%d",&n);
	printf("%d",hanoi(n)-hanoi(n-1)+1);
	return 0; }