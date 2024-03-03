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
void recur(int n,char From,char To) {
    if(n==1)
        move(From,To);
    if((To-From+3)%3==2) {
        recur(n-1,From,((To-1)-'A'+3)%3+'A');
        recur(n-1,((To-1)-'A'+3)%3+'A'),To); }
    else {
        recur(n-1,From,To); } }
int main() {
    int n;
    scanf("%d",&n);
	recur(n,'A','C');
	return 0; }