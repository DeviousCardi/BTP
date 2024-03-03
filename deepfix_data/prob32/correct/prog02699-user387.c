#include <stdio.h>
#include <stdlib.h>
int main() {
    int i,n;
    int a[25];
    scanf("%d",&n);
    for(i=0;i<n;i++){
       scanf("%d",&a[i]); }
    if(n!=1){
        printf("Yes\n"); }
      if(a[i]<a[i-1] && a[i]<a[i+1]){
            printf("Yes\n"); }
       else {
             printf("No\n"); }
	return 0; }