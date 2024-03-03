#include <stdio.h>
#include <stdlib.h>
int main() {
    int n;
    scanf("%d",&n);
    int rev=0,s=0,t;
    for(t=n;t!=0;t=t/10) {
        s=t%10;
        rev=rev*10+s; }
    if(t==n)
    printf("YES");
    else
    printf("NO");
	return 0; }