#include <stdio.h>
#include <stdlib.h>
int main() {
	    int s;
	    float t;
	    scanf("%d",&s);
	    if (s<=200000) {printf("%.2f",t==0.00);}
	    else if(s>=200001&&s<=500000){ printf("%.2f",t=(s-200000)*.1);}
	    else if (s>=500001&&s<=1000000){printf("%.2f",t=30000+(s-500000)*.2);}
	    else if (s>=1000001){printf("%.2f",t=130000+(s-1000000)*.3);}
	return 0; }