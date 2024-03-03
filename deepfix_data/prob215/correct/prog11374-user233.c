#include <stdio.h>
#include <stdlib.h>
int main() {
    int a,i,j,k=0,p[30],sum=0;
    for(i=0;i<30;i++)
    p[i]=0;
    scanf("%d",&a);
    for(i=1;i<=a/2;i++) {
        if(a%i==0) {
            for(j=0;p[j]!=0;j++) {
                if(i%p[j]==0)
                break;
                else
                p[k]=i; }
            k++; } }
    i=0;
    while(p[i]!=0)
    sum=sum+p[i];
    if(sum==a)
    printf("Yes");
    else
    printf("No");
	return 0; }