#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,n,index,t;
	int a[25];
	scanf("%d\n",&n);
	if(n==1){
	   printf("%d\n",n); }
	  scanf("%d",&t);
    for(i=1;i<t;i++){
        scanf("%d\n",&a[i]);
        scanf("%d\n",&index);
        if(index>1){
            printf("%1d\n",a[index]); } }
	return 0; }