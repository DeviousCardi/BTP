#include <stdio.h>
#include <stdlib.h>
int main() {
    int a,i,j,k=0,p[30],sum=0;
    for(i=1;i<30;i++)
    p[i]=0;
    scanf("%d",&a);
    for(i=1;i<=a/2;i++) {
        if(a%i==0) {
            p[k]=i;
            k++; } }
    for(i=1;i<=k;i++) {
        for(j=0;j<i;j++) {
            if(p[i]%p[j]==0)
            p[i]=0; } }
    for(i=0;i<=k;i++)
    sum=sum+p[i];
    if(sum==a)
    printf("YES");
    else
    printf("NO");
	return 0; }