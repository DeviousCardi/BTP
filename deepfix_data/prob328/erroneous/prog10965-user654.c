#include <stdio.h>
#include <stdlib.h>
int main() {
	int fibo(int m) {
	    if(m==0)
	    return 0;
	    else if (m==1)
	    return 1;
	    else
	    return(fibo(m-1)+fibo(m-2)); }
	int main() {
	       int i,m,t,res;
	        scanf("%d\n",&t);
	        int c[t];
	        for(i=0;i<t;i++) {
	            res=0;
	            scanf("%d\n",&c[i]);
	            for(m=0;m<20;m++) {
	                if(c[i]==fibo(m))
	                res=1; }
	            if(res==1)
	            printf("yes\n");
	            else
	            printf("no\n");
	return 0; }