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
void Hanoi(int N,char A,char B,char C){
    if(N==0){
        return; }
    else{
        Hanoi(N-1,A,C,B);
        move(A,B);
        Hanoi(N-1,C,A,B);
        move(B,C);
        Hanoi(N-1,A,C,B); } }
int main() {
	char A='A',B='B',C='C';
	int N;
	scanf("%d",&N);
	Hanoi(N,A,B,C);
	return 0; }