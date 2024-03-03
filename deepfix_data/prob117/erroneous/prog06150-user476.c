#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int toh()
void check(double k,int j) {
    double no_of_move;
    no_of_move=pow(2,j)-1;
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