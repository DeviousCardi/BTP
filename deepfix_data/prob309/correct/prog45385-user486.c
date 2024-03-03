#include <stdio.h>
int main() {
    int i,j=0,k,n,count;
    scanf("%d",&n);
    char b[2*n-1];
    int a[n];
    scanf("%s",b);
    for(i=1;i<n;i++)
    {a[i]=(int)b[2*n]-(int)'0';}
    for(i=0;i<n;i++) {
        count=0;
        k=a[i];
        for(j=0;j<n;j++)
        { if(k==a[j])
          count=count+1; }
        if(count!=k) {
            printf("No");
            break; } }
    if(i==n)
    printf("Yes"); }