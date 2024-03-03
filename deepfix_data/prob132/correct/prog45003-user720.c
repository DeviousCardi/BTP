#include <stdio.h>
int main() {
    int a[100];
    int n,i,k,j,p=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        a[i]=getchar(); }
    for(i=0;i<n;i++){
        k=0;
        for(j=0;j<n;j++){
            if(a[i]==a[j])k++; }
        if(k==a[i])p++; }
   if(p==n)printf("y");
   else printf("n");
   printf("%d",p);
    return 0; }