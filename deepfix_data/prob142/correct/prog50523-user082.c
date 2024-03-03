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
void towerofhanoi(int num,char x,char y,char z) {
    if(num==1)
     move(x,y);
    if(num>0) {
     towerofhanoi(num-1,z,x,y);
     towerofhanoi(num-1,x,y,z);
     move(y,z);
     towerofhanoi(num-1,x,y,z); } }
int main() {
	int N;
	scanf("%d",&N);
	if(N!=0)
	towerofhanoi(N,'A','B','C');
	return 0; }