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
int revhanoi(char from,char middle,char to,int n);
int hanoi(int n) {
    if(n==1) {
        move('A','B');
        move('B','C');
        return 0; }
    hanoi(n-1);
    move('A','B');
    revhanoi('C','B','A',n-1);
    move('B','C');
    hanoi(n-1);
    return 0; }
int revhanoi(char from,char middle,char to,int n) {
    if(n==1) {
        move(from,to);
        return 0; }
    revhanoi(from,to,middle,n-1);
     move(from,to);
     revhanoi(middle,from,to,n-1);
     return 0; }
int main() {
	int N;
	scanf("%d",&N);
	if(N==0) { }
	else {
	hanoi(N); }
	return 0; }