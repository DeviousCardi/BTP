#include <stdio.h>
int main(){
    int n,i,j;
    scanf("%d",&n);
    int a[2*n];
    for(i=0;i<n;i++) {
      scanf("%d",&a[i]); }
    int count[n];
    for(i=0;i<2*n;i++) {
       for(j=i+1;j<2*n;j++) {
           if(a[i]==a[j] && i!=j) {
               break; }
         count[i]++; } }
    int min=2*n;
    for(i=0;i<n;i++) {
        if(min>count[i])
            min=count[i]; }
    printf("%d",min);
    return 0; }