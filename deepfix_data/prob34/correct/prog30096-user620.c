#include <stdio.h>
#include <stdlib.h>
int main() {
	int  size,i,test,k;
	scanf("%d",&size);
	int num[size];
	for(i=0;i<size;i++)
	    scanf("%d",&num[i]);
	scanf("%d",&test);
	for(i=0;i<test;i++) {
	 scanf("%d",&k);
     if(k==0)
        if(num[k]>num[k+1])
          printf("Yes\n");
        else
            printf("No\n");
     else if(k==(size-1))
          if(num[k]>num[k-1])
            printf("Yes\n");
          else
	        printf("No\n");
	 else
	    {if(num[k]>num[k+1] || num[k]>num[k-1])
	        printf("Yes\n");
	     else
	        printf("No\n"); } }
	return 0; }