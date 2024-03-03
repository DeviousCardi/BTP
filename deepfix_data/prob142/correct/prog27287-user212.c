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
void display (int n) {
     if(n==1){
                 move('A','B');
                 move ('B','C'); }
     if(n==2) {
         display(1); move('A','B');
                 move('C','A');
                 move('B','C');
                 display(1); }
     if(n==3) {
         display(2);move('A','B');
                 move('C','A');
                 move('A','B');
                 move('C','A');
                 move('B','C');
                 move('C','A');
                 move('B','C');
                 display(2); }
     return; }
int main() { int n;
             scanf("%d",&n);
             display(n);
	return 0; }