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
int main() {
    int N;
    static int m,n=0,co=0;
    char A,B,C;
    scanf("%d",&N);
    m=N;
    int count=0;
    while(count<=N&&N>0) {
       if(m!=0) {
       move('A','B');
       m=m-1;
       n=n+1; }
       else if(n>0&&co==0) {
           move('B','C');
           n=n-1;
           co=co+1; }
       if(co==N)
       break;
       else if(m<N&&n==1) {
         move('C','A');
         co=co-1;
         m=m+1; } }
	return 0; }