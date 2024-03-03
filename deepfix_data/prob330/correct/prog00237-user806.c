#include <stdio.h>
int main(){
    int n,i,s=0,j;
    scanf("%d",&n);
    int ar[n];
    for(j=0;j<n;j++)
       scanf("%d",&ar[j]);
    for(i=1;i<n-1;i++){
        if((ar[i]>ar[i-1])&&(ar[i]>ar[i+1]))
          s++; }
    printf("%d",s);
    return 0; }