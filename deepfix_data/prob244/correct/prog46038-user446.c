#include <stdio.h>
#include <stdlib.h>
int main() {
    int a;
    float b;
	scanf("%d",&a);
	if(a<200001){printf("0.00");}
	if(a>200000 && a<500001){printf("%.2d",0.1*(a-200000));};
	if(a>500000 && a<1000001){printf("%.2d",30000+0.2*(a-500000));}
	if(a>1000000){printf(".2d",130000+0.3*(a-1000000));}
	return 0; }