#include <stdio.h>
#include <stdlib.h>
void move(char *From, *char To) {
    const int NumPerLine = 8;
    static int num = 0;
    if (num%NumPerLine == 0) {
        printf("\n%5d: ", num); }
    else {
        printf(" "); }
    printf("%c->%c", From, To);
    num++; }
 char *P,*Q,*R;
 char A,B,C ;
void hanoi(int n, char *P, char *R){
    if (n==0)
    return;
    else if (n==1) {
        move(&A,&B);
        move(&B,&C); }
    else if(n==2) {
        hanoi(1, P,R);
        move(&A,&B);
        move(&C,&A);
        move(&B,&C);
        hanoi(1, P,R); }
    else {
        hanoi(n-1,P,R);
        move(&A,&B);
        hanoi(n-1,R,P);
        move(&B,&C);
        hanoi(n-1,P,R); } }
int main() {
	int n;
	scanf("%d", &n);
	hanoi(n,&A,&C);
	return 0; }