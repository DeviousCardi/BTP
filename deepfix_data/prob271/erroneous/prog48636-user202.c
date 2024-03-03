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
void toh(int n,int i){
    if(n==1){
        if(i==13){
            move('A','B');
            move('B','C'); }
        if(i==23)    move('B','C')
        if(i==12)    move('A','B')
        if(i==31) }
    else{
        toh(n-1);
        move('A','B');
        toh(n-2);
        move('B','C');
        toh(n-1); } }
int main() {
    int n;
    scanf("%d",&n);
    if(n==0) return 0;
    toh(n);
	return 0; }