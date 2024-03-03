#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int a[100],count=0,i,j;
    for(i=0;i<n;i++)
    scanf("%d,",&a[i]);
    for(i=0;i<n;i++) {
        for(j=i+1;j<n;j++) {
            if(a[i]==a[j])
            count++;
            printf("%d",count); } }
    return 0; }