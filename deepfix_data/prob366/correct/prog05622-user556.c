#include <stdio.h>
#include<limits.h>
int main(){
    int n,i,j;scanf("%d",&n);int min=INT_MAX,dist=0;int a[2*n];
    for(i=0;i<2*n;i++)
    scanf("%d",&a[n]);
    for(i=0;i<2*n;i++) {
        for(j=i+1;j<2*n;j++) {
            if(a[i]==a[j])
            dist=j-i; }
        if(dist<min)
        min=dist; }
    printf("%d",min);
    return 0; }