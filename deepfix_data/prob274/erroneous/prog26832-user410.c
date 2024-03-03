#include <stdio.h>
int main(){
    int n,i,j,k,p,flag=0,c=0;
    scanf("%d",&n);
    int a[n];
    int b[n];
    for(i=1;i<=n;i++) {
        scanf("%d",&a[i]); }
    i=1;k=1;
   while(1) {
        b[k]=i;
        i=a[i];
    for(p=1;p<=k;p++) {
        for(j=p+1;j<=k;j++) {
            if(b[j]==b[p]) {
                flag=1;
                break; } }
        if(flag==1)
        break; }
    k++;
    if(flag==1)
    break; }
    printf("%d ",(k-2));
    for(j=1;j<=k-1;j++) {
        if(b[j]==b[k-1]) {
            c++;
            if(c==1)
        printf("%d ",(k-j-1)); }
    return 0; }