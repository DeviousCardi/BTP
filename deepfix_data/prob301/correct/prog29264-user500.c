#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,n,index;
	int a[25];
	scanf("%d",&n);
	if(n==1){
	   printf("%d",n); }
    for(i=1;i<n;i++){
        scanf("%d",&a[i]);
      for(i=1;i<n;i++){
        scanf("%d",&index);
        if(index==2){
            printf("%d",a[1]); } } }
	return 0; }