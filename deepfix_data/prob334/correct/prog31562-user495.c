#include <stdio.h>
#include <stdlib.h>
int main() {
	int b,h,i,j,n,m;
	scanf("%d",&h);
	scanf("%d",&b);
    for(i=1;i<=h;i++) {
        for(i=1;j<=h+b-(2*(h-i))-1;j++) {
            if(j<h-i)
            printf("v ");
            else
            for(n=i;n<=i+b-2*(h-i);n++) {
                m=n%10;
                printf("%d",m); } }
        printf("/n"); }
	return 0; }