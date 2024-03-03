#include <stdio.h>
#include <stdlib.h>
int main() {
    int i,n,k,j;
    scanf("%d",&n);
    int a[n];
    if(n<=20){
    for(i=0;i<=n;i++)
    scanf("%d\n",&a[i]);}
    for(k=i;k<=n;k++) {
    scanf("%d\n",&a[k]);}
    for(j=1;j<=n;j++){
        k=1;
        while(a[j]<a[k]){
        k=k+1;}
    printf("Yes\n");}
    printf("No");
	return 0; }