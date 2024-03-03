#include <stdio.h>
#include <stdlib.h>
int main() {
	int a;
	int x;
	int sum=0;
    scanf("%d",&a);
    for(x=1;x<a;x++) {
    if (a%x==0)
        sum=sum+x;}
        if(a==sum)
        printf("YES");
        else
        printf("NO");
    return 0; }