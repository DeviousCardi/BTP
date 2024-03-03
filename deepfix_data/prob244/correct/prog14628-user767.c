#include <stdio.h>
#include <stdlib.h>
int main() {
    int i;
    int t;
    scanf ("%d",&t);
    if(i<=200000)
    t=0;
    printf ("%d",t);
    if((i>=200001)&&(i<=500000))
    t=10*(i-200000)/100;
    printf ("%d",t);
    if((i>=500001)&&(i<=1000000))
    t=30000+20*(i-500000)/100;
    printf ("%d",t);
    if (i>=1000000)
    t=130000+30*(i-1000000)/100;
    printf ("%d",t);
	return 0; }