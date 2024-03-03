#include <stdio.h>
#include <stdlib.h>
int catalan_num(int n){
    int k;
    float j;
    if(n==0){
        return 1; }
    else{
        k=(2*n)-1;
        j=(2.0*k)/(n+1);
        return j*catalan_num(n-1); } }
int main() {
    int n,i,j,count,a[1000];
    scanf("%d",&n);
    for(i=0;i<n;i=i+1){
        scanf("%d",&a[i]); }
        for(j=0;j<17;j=j+1){
            printf("%d\n",catalan_num(j)); }
	return 0; }