#include <stdio.h>
#include <stdlib.h>
int main() {
    int o;
    int t;
    scanf ("%d",&o);
    if
    (o<=200000)
    t=0;
    printf ("%d",t);
    if((o>=200001)&&(o<=500000))
    t=10*(o-200000)/100;
    printf ("%d",t);
    if((o>=500001)&&(o<=1000000))
    t=30000+20*(o-500000)/100;
    printf ("%d",t);
    if (o>=1000000)
    t=130000+30*(o-1000000)/100;
    printf ("%d",t);
	return 0; }