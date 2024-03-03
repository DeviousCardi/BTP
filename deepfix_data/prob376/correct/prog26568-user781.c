#include <stdio.h>
#include <stdlib.h>
int cat(int n){
    if (n==0 || n==1) return 1;
    return (4*n-2)*cat(n-1)/(n+1); }
   int main(){
    int a[100],t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%d",a[i]);}
        for(i=0;i<t;i++){
            if (a[i]<=15 && a[i]>=0) printf("%d",a[i]);
            else return 0;}
	return 0; }