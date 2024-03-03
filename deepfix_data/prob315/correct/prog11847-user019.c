#include <stdio.h>
#include <stdlib.h>
int main() {
    int n,i,j,sum=0,t=0;
    int a[1000],b[1000];
    scanf("%d",&n);
    for(i=1;i<=n;i++) {
        scanf("%d",&a[i]); }
    for(i=1;i<n;i++) {
        t=0;
        for(j=i;j<=n;j++) {
            if(a[j]>a[i])
            t+=1; }
        b[i]=t;
        printf("%d ",&t); }
    printf("%d",0);
    for(i=1;i<n;i++)
    sum=sum+b[i];
    printf("\n%d",sum);
	return 0; }