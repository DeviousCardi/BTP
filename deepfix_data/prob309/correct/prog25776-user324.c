#include <stdio.h>
int main() {
    int n,arr[n],count[n],fick=0,i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++) {
    scanf("%d,",arr[i]);}
    for(i=0;i<n;i++){count[i]=0;
        for(j=0;j<n;j++){
            if(arr[j]==arr[i]){
                count[i]++; } } }
      for(i=0;i<n;i++){
          if(count[i]==arr[i]){fick++;} }
      if(fick==n){printf("Yes");}
      else{ printf("No");}
    return 0; }