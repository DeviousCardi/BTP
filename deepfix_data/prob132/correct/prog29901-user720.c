#include <stdio.h>
int main() {
    int a[100];
    int n,i,k,j,p=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d,",&a[i]); }
    for(i=0;i<n;i++){
        k=0;
        for(j=0;j<n;j++){
            if(a[i]==a[j])k++; }
        if(k==a[i])p++; }
   if(p==n)printf("y");
   else printf("%d",a[4]);
    return 0; }