#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
	        int x,i,count=0;
	        scanf("%d",&x);
	        for(i=1;i<=(x/2);i++) {
	        if(x%i==0)
	        for(count=0;count<=x;count=count+i)
	       if(count==x)
	            printf("Yes\n");
	       else
	            printf("No\n"); }
return 0; }