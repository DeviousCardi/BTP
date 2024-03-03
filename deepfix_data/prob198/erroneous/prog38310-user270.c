#include <stdio.h>
#include <stdlib.h>
int main() {
	int n1, n2,i ;
	scanf("%d",&n1);
	int a1[n1];
	for (i=0;i<n1;i++)
	{   scanf("%d",&a1[i]);
	    printf("%d ",a1[i]); }
	printf("\n");
	scanf("%d",&n2);
	int a2[n2];
	for (i=0;i<n2;i++) {
	    scanf("%d",&a2[i]);
	   printf("%d ",a2[i]); }
	int j, temp[n1], flag=0;
	printf("\n\n")
	for (flag=0,j=0;j<n1;j++)
    {	for(i=0;i<n2;i++) {
    	    if (a1[j]==a2[i])
    	    { flag=1; break; } }
    	if (flag==1)
    	{ a1[j]=0;} }
    for(i=0;i<n1;i++)
    { printf("%d ",a1[i]);}
	return 0; }