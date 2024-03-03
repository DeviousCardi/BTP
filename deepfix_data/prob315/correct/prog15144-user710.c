#include <stdio.h>
#include <stdlib.h>
int main() {
    int n,i,j,p,sum;
    scanf("%d",&n);
    int a[1000];
    int b[1000];
    for(i=0;i<n;i++){scanf("%d",&a[i]);}
    for(i=0;i<n;i++){
        p=0;
        for(j=i+1;j<n;j++){
            if(a[j]<a[i]){p++;}
            b[i]=p; } }
    for(i=0;i<n;i++){
        sum=sum+b[i]; }
    printf("%d\n",sum);
    for(i=0;i<n;i++){printf("%d ",b[i]);}
	return 0; }