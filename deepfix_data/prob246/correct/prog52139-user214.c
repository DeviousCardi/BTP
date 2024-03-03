#include <stdio.h>
int main() {
    int a,b,c;
        scanf("%d %d %d",&a,&b,&c);
        int s=a+b+c;
        int m=a*b*c;
        float v=(a+b+c)/3.000;
            printf("\n%d",s);
            printf("\n%d",m);
	        printf("\n%.3f",v);
	return 0; }