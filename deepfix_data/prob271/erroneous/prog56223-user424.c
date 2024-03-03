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
void hanoi(int n,char From,char To,char Through){
    if(n==0) return;
    else if(n==1){
        move(From,Through);
        move(Through,To); }
    else{
        hanoi(n-1,From,Through,To);
        hanoi(n-1,Through,To,From);
        move(From,Through);
        hanoi(n-1,To,From,Through);
        move(Through,To);
        hanoi(n-1,From,Through,To);
        hanoi(n-1,Through,To,From) } }
int main() {
	int n;
	scanf("%d",&n);
	hanoi(n,'A','C','B');
	return 0; }