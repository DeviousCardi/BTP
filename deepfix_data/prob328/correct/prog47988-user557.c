#include <stdio.h>
#include <stdlib.h>
int fib(int k){
    if(k==1)
        return 0;
    else if(k==2)
        return 1;
    else return fib(k-1)+fib(k-2); }
int main() {
    int t,k,i=0,j=20,b;
    printf("%d",fib(9));
    scanf("%d",&t);
    for(b=0;b<t;b++)
        {scanf("%d",&k);
	 while(1){
	     printf("%d %d \n",i,j);
	     if(k>fib((i+j)/2))
	     i=(i+j)/2;
	  else if(k==fib((i+j)/2)){
	      printf("yes\n");
	      break; }
	  else j=(i+j)/2;
	   if(j==i+1){
	       if(k==fib(j)||k==fib(i))
            printf("yes\n")	;
	       else printf("no\n");
	       break; } } }
	return 0; }