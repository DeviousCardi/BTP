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
void abc(int n) {
    int p,m;
    while(n!=0) {
    if(n==1) {
        move('A','B');
        move('B','C'); }
     else if(n>1) {
         move('A','B');
         move('B','C');
         m=n;
         p=n-1;
         while(m!=1) {
           move('A','B');
           if(p==m)
            {  move('B','C');
               move('A','B');
               move('C','B'); }
           move('C','A');
           move('B','C');
           m--; } }
     n--; } }
int main() {
	int n;
	scanf("%d",&n);
	abc(n);
	return 0; }