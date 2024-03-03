#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
	        int x,i,count=0;
	        scanf("%h",&x);
	        for(i=1;i<=(x/2);i++) {
	        if(x%i==0)
	        count=count+i;}
	        if(count==x)
	           printf("YES\n");
	       else
	            printf("NO\n");
return 0; }