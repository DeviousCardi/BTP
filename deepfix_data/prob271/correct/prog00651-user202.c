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
void toh_(int n,char ch){
    if(n==1) {if(ch=='C')  move('C','A');
    move(ch,ch-1);}
    else{
        toh_(n-1,ch);
        move('C','A');
        toh_(n-1,ch-1); } }
void toh(int n){
    if(n==0) return;
    if(n==1){
            move('A','B');
            move('B','C'); }
    else{
        toh(n-1);
        move('A','B');
        toh_(n-1,'C');
        move('B','C');
        toh(n-1); } }
int main() {
    int n;
    scanf("%d",&n);
    toh(n);
	return 0; }