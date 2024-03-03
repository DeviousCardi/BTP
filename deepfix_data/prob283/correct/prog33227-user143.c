#include <stdio.h>
#include <stdlib.h>
   int A(int m, int n) {
   if(m==0) {
     return n+1; }
     if(m>0 && n==0) {
     return A(m-1,1); }
     if(m>0 && n>0) {
    return A(m-1,A(m,n-1)); }
    return 0; }
int main() {
    int i,j,k,c=0;
    scanf("%d",&k);
    for(i=0;i<=3;i++) {
        for(j=0;j<=5;j++) {
            if(A(i,j)==k) {
             printf("%d %d",i,j);
             c=1;
             break; } }
        if(c==1) break; }
    if (c==0)
    printf("-1");
	return 0; }