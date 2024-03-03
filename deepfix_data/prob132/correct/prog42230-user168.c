#include <stdio.h>
int main() {
    int n;
    int a[100],count=0,i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {count=0;
        for(j=i+1;j<n;j++) {
            if(a[i]==a[j])
            count++;
        }printf("%d",count); }
    return 0; }