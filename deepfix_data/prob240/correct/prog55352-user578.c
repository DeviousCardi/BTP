#include <stdio.h>
#include <stdlib.h>
int cseries(int num)
{   if(num==0)
    {return 1;}
    if(num==1)
    {return 1;}
    else
    {   num = num - 1;
        return(cseries(num)*(2*num+2)*(2*num+1)/((num+1)*(num+2))); } }
int main() {
    int i,j,t,a[20],o,b[20];
	scanf("%d",&t);
    for(i=0;i<t;i++) {
        scanf("%d",&a[i]); }
    for(j=0;j<15;j++) {
        b[j] = cseries(j);
        printf("%d\n", b[j]); }
    for(i=0;i<t;i++) {
        for(j=0;j<15;j++) {
            if(a[i]<b[j]) {
                o = cseries(b[j-1]);
                printf("%d\n",o);
                break; } } }
	return 0; }