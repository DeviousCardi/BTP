#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,n,index;
	int a[25];
	scanf("%d\n",&n);
	if(n==1){
	   printf("%d\n",n); }
    for(i=0;i<n;i++){
        scanf("%d\n",&a[i]);
      for(i=1;i<n;i++){
        scanf("%d\n",&index);
        if(index==2){
            printf("%d\n",a[1]); } } }
	return 0; }