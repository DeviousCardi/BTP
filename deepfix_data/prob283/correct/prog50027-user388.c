#include <stdio.h>
#include <stdlib.h>
int ackerman(int*,int*);
int main() {
    int k,n,m;
    scanf("%d",&k);
    int *a=&n;
    int *b=&m;
    for(n=0;n<=5;n++) {
        for(m=0;m<=3;m++) {
            if(ackerman(a,b)==k) {
                printf("%d %d",m,n); } } }
	return 0; }
int ackerman(int* m,int* n) {
    if(*m==0) {
        return *n+1; }
    else if(*m>0&&*n==0) {
        return ackerman(*m-1,1); }
    return ackerman(*m-1,ackerman(*m,*n-1)); }