#include <stdio.h>
#include <stdlib.h>
int main() {
int test,arr[100];
scanf("%d",&test);
for(i=0;i<test;i++) {
scanf("%d",&arr[i]);
for(j=0;j<=17;j++) {
    if(arr[i]==cat(j))
    {printf("yes\n");break;}
    else if (j==17)
    printf("no\n"); } }
	return 0; }
int cat(int n){
    if(n==0)return 1;
    else
    return(cat(n-1)*(2.0*(2*n-1)/(n+1))) }