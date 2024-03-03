#include<stdio.h>
int main() {
    int n,j,k=0,count=0,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]);
        printf("%d",a[i]); }
    int b[n];
    for(k=0;k<n;k++)
    {count=0;
        for(j=0;j<n;j++) {
        if (a[j+1]>a[j]) {
            count++;
            printf("$%d",count); }
         else break; }
        b[k]=count;
        printf("%d",b[k]); }
    return 0; }