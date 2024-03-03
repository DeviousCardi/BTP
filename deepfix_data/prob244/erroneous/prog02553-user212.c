#include <stdio.h>
#include <stdlib.h>
int main() {
             int a;
             float t;
             scanf{"%d",&a};
             if(a<=200000) {t=0;}
             if(a>=200001&&a<=500000) {t=(1.0/10)*(a-200000);}
             if(a>=500001&&a<=1000000) {t=((30000)+(1.0/5)*(a-500000));}
             if(a>1000000) {t=((130000)+(3.0/10)*(a-1000000));}
             printf(".2%f",t)
	return 0; }