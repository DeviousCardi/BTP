#include<stdio.h>
#include<limits.h>
int main() {
    int n,m,i,j,a ;
    scanf("%d %d" ,&n, &m);
    int p=INT_MAX;
    int q=INT_MIN;
    for(i=0;i<n;i++) {
        for(j=0;j<m;j++) {
            scanf("%d" ,&a);
            if(a<p)
             p=a; }
    if(p<q)
        q=p; }
    printf("%d" ,q);
    return 0; }