#include <stdio.h>
#include <stdlib.h>
int series(int k,int j) {
    if(k>0) {
        j=2*j;
        k--;
        series(k,j); }
    else
    return j; }
int main() {
    int t,i,j;
    scanf("%d",&t);
    int a[t];
    for(i=0;i<t;i++)
    scanf("%d",&a[i]);
    for(i=0;i<t;i++) {
        j=series(a[i],1);
        printf("%d\n",j-1); }
	return 0; }