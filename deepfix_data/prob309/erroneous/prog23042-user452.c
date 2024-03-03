#include <stdio.h>
int main() {
    int n,i,j,k;
    scanf("%d",&n);
    int a[n];
for(i=0;i<n;i++){
    scanf("%d",&a[i]); }
int count=0;
for(i=0;i<n;i++){
    for(k=o;k<i-1;k++){
        if(a[k]==a[i])
          i=i+1;
      for(j=i+1;j<n;j++){
        if(a[i]==a[j]){
            count=count+1; } }
    if(count==n)
       break; }
    return 0; }