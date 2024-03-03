#include <stdio.h>
int rec(int k,int d,int m[d]) {
    int i,j,l[k+1];
    for(j=0;j<=k;j++) {
        if(j<d)
            l[k]=m[k];
        else {
            for(i=j-d;i<=j-1;i++)
                l[j]=l[j]+l[i]; } }
    return l[k]; }
int main() {
    int n,d,i;
    scanf("%d %d",&d,&n);
    int b[d];
    for(i=0;i<d;i++)
        scanf("%d ",&b[i]);
    int a[n+1];
    a[n]=rec(n,d,&b[d]);
    printf("%d",a[n]);
    return 0; }