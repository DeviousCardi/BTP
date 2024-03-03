#include <stdio.h>
#include <stdlib.h>
int main() {
    int i,num,t,pal=0;
    scanf("%d",&num);
    t=num;
    for(i=0;t!=0;i++) {
            int a=t%10;
            pal=pal*10 + a;
            t=t/10; }
    printf("%d",pal);
	return 0; }