#include <stdio.h>
#include <stdlib.h>
int main() {
    int n,i,a[10000],j;
    scanf("%d",&n);
    for(i=0; i<n; i++){
    scanf("%d",&a[i]); }
    for(i=0; i<n; i++){
      if(a[i]=!a[i+1]){
          continue; }
    else{
        printf("%d",a[i]); } }
	return 0; }