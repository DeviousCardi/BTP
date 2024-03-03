#include <stdio.h>
int main() {
    int n,i,k,j,p,t;
    scanf("%d\n",&n);
    int a[n];
    for(i=0;i<n;i++) {
        scanf("%d ",&a[i]); }
    for(j=0;j<n;j++) {
        k=0;
         for(i=0;i<n;i++) {
         if(a[i]==(j+1)) {
             k++;
             t=a[i]; } }
        printf("%d ",k);
        if(k==1)
        continue;
        if(k==2)
        printf("%d\n",t);
        if(k==0)
        printf("%d",t);
        else
        break; }
    return 0; }