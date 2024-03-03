#include <stdio.h>
#include <stdlib.h>
int main() {
    int n,i,j,p,sum;
    scanf("%d",&n);
    int a[n];
    int b[n];
    for(i=0;i<n;i++){scanf("%d",&a[i]);}
    for(i=0;i<n;i++){
        p=0;
        for(j=0;j<i;j++){
            if(a[j]>a[i]){p++;}
            b[i]=p; } }
    for(i=0;i<n;i++){
        sum=sum+a[i]; }
    printf("%d\n",sum);
    for(i=0;i<n;i++){printf("%d",a[i]);}
	return 0; }