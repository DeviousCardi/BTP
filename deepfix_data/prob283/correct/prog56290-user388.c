#include <stdio.h>
#include <stdlib.h>
int ackerman(int*,int*);
int main() {
    int k,n=0,m=0;
    scanf("%d",&k);
    int *a=&n;
    int *b=&m;
    for(n=0;n<=5;n++) {
        for(m=0;m<=3;m++) {
            if(ackerman(a,b)==k) {
                printf("%d %d",m,n); } } }
	return 0; }
int ackerman(int* m,int* n) {
    int a=1;
    int*t=&a;
    if(*m==0) {
        return *n+1; }
    else if(*m>0&&*n==0) {
        return ackerman(m-1,t); }
    return ackerman(m-1,ackerman(m,n-1)); }