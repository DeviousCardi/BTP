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
    int i=0;
    if(n==0) return;
    else if(n==1){
        if(i%2==0){
        move(From,Through);
        move(Through,To); }
        else move(From,To); }
    else{
        hanoi(n-1,From,To,Through);
        i++;
        move(From,Through);
        hanoi(n-1,To,From,Through);
        i++;
        move(Through,To);
        hanoi(n-1,From,To,Through);
        i++; } }
int main() {
	int n;
	scanf("%d",&n);
	hanoi(n,'A','C','B');
	return 0; }