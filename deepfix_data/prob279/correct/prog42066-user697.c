#include <stdio.h>
int main() {
    int n,i,k,j;
    scanf("%d\n",&n);
    int a[n];
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]);
        printf("%d",a[i]); }
    for(j=0;j<n;j++) {
        k=0;
         for(i=0;i<n;i++) {
         if(a[j]==(i+1))
         k++; }
        if(k==1)
        continue;
        if(k==2)
        printf("%d\n",a[j]);
        if(k==0)
        printf("%d",a[j]);
        else {
            printf("%d",k);
            break; } }
    return 0; }