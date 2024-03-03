#include <stdio.h>
#include <stdlib.h>
int fib (int x) {
    if (x==1)
    return 0;
    else if (x==2)
    return 1;
    else
    return fib(x-1)+fib(x-2); }
int main() {
	int t;
	scanf("%d",&t);
	int i,temp,k,flag;
	for (i=0;i<t;i++)
	{   k=1;
	    flag=0;
	    scanf("%d",&temp);
	    while (flag=0&&temp<fib(20)) {
	        if (fib(k)==temp)
	            {flag=1;break;}
	        else if (fib(k)>temp)
	            {flag=-1;break;}
	        else
	            k++; }
	 if (flag==1)
printf("yes\n");
else
printf("no\n"); }
	return 0; }