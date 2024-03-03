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
        scanf("%d\n",&index);
        if(index>1 && index<n){
            printf("%d\n",a[index]); } }
	return 0; }