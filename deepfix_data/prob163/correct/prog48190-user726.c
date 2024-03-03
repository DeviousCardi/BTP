#include <stdio.h>
#include <stdlib.h>
int main() {
	char a[501], b[501];
	int s1, s2, sum[501], r=0, ad=0, i, j=0, m1=0, m2=0;
	scanf("%d\n%d\n\n", &s1, &s2);
	for(i=0;i<s1;i++)   {
	    a[i]=getchar(); }
	scanf("\n");
	for (i=0;i<s2;i++)   {
	    b[i]=getchar(); }
	scanf("\n");
	for(i=0;i<501;i++)
	    sum[i]=0;
	for(i=1;i<502;i++)    {
	    if((s1-i)>=0)
	        m1=a[(s1-i)]-48;
	    else
	        m1=0;
	    if((s2-i)>=0)
	           m2=b[(s2-i)]-48;
	    else
	        m2=0;
	   ad=m1+m2+r;
	   r=ad/10;
	   ad=ad%10;
	   sum[501-i]=ad; }
	printf("\n");
	for(i=0;i<501;i++)   {
	    if(sum[i]!=0)
	        j++;
	    if (j!=0)
	        printf("%d",sum[i]); }
	return 0; }