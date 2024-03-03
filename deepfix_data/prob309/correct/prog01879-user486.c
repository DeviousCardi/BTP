#include <stdio.h>
int main() {
    int i,j,k=0,n,count;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++) {
        count=0;
        k=a[i];
        for(j=0;j<n;j++)
        {if(a[i]==a[j])
        count=count+1; }
        if(count!=k) {
            printf("No");
            break;} }
    if(i==n)
    printf("Yes"); }