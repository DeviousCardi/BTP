#include <stdio.h>
#include <stdlib.h>
int cseries(int num) {
    if(num==1)
    {return 1;}
    else
    {   num = num - 1;
        return(cseries(num)*(2*num+2)*(2*num+1)/((num+1)*(num+2))); } }
int main() {
    int i,t,a[100],o;
    scanf("%d",&t);
    for(i=0;i<t;i++) {
        scanf("%d",&a[i]);
        o = cseries(a[i]);
        printf("%d/n",o); }
	return 0; }