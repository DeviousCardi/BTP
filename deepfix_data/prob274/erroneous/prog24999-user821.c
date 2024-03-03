#include <stdio.h>
int main(){
    int i,j,n;
    int t;
    int count=0;
    scanf("%d",&n);
    int a[n];
    for(i=0; i<n && 2<=n && n<=100 ;i++) {
        scanf("%d",&a[i]); }
       for(j=0;j<n;j++) {
        if (a[j]==a[j+t])
         count=count+1; }
    printf("%d  ",count);
    for(i=0;i<n;i++) {
         if(a[i]==a[i+k])
         count=count+1; }
    printf("%d",count);
       return 0; }