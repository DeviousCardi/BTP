#include <stdio.h>
#include<limits.h>
int main(){
    int n,i,j;scanf("%d",&n);int min=INT_MAX;int a[2*n];
    for(i=0;i<2*n;i++)
    scanf("%d",&a[i]);int b[n];
    for(i=0;i<2*n;i++) {
        for(j=i+1;j<2*n;j++) {
            if(a[i]==a[j])
            b[i]=j-i; } }
    for(i=0;i<n;i++)
    {if(b[i]<min)
    min=b[i]; }
    printf("%d",min);
    return 0; }