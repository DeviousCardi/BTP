#include<stdio.h>
#include<limits.h>
int main() {
    int a,m,n,k,i,j,p=100000;
    scanf("%d",&n);
    scanf("%d",&m);
    for(i=0;i<m;i++){
        k=-100000;
        for(j=0;j<n;j++){
            scanf("%d",&a);
            if(a>k)k=a; }
        if(p>k)p=k; }
    printf("%d",p);
    return 0; }