#include <stdio.h>
int main(){
    int n,i,j,count=0;
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    for(j=1;j<n-1;j++) {
        if(a[j]>a[j-1]&&a[j]>a[j+1])
        count=count+1; }
    printf("%d",count);
    return 0; }