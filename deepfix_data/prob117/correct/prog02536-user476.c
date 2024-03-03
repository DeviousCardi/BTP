#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int count=0;
void toh(int n,char a,char b,char c) {
    if(n==0)
    return 0;
    toh(n-1,a,c,b);
    count++;
    toh(n-1,b,a,c); }
void check(double k,int j) {
    char a,b,c;
    double no_of_move;
    toh(j,a,b,c);
    no_of_move=count;
    if(no_of_move>k)
    printf("no\n");
    else if(no_of_move==k)
    printf("yes\n");
    else
    check(k,j+1); }
int main() {
    int i,t;
    double k;
    scanf("%d",&t);
    for(i=0;i<t;i++) {
        scanf("%lf",&k);
        check(k,0); }
	return 0; }