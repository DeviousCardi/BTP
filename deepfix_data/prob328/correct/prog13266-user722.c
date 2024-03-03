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
	int i,temp,k=0,flag=0;
	for (i=0;i<t;i++) {
	    scanf("%d",&temp);
	    while (flag=0&&k<=20&&temp<fib(20)) {
	        if (fib(k)==temp)
	            {flag=1;break;}
	        else if (fib(k)>temp)
	            {flag=-1;break;}
	        else
	            k++; } }
if (flag==1)
printf("yes");
else
printf("no");
	return 0; }