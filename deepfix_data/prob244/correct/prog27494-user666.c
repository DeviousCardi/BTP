#include <stdio.h>
#include <stdlib.h>
int main() {
    long ti;float it;
    scanf("%l",&ti);
    if(ti<200001){it=0;}
    else if(ti<500001){it=0.1*(ti-200000);}
    else if(ti<1000001){it=30000+0.2*(ti-500000);}
    else {it=130000+0.3*(ti-1000000);}
    printf("%.2f",it);
	return 0; }