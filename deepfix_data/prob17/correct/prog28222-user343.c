#include <stdio.h>
int main() {
	int n1,n2;
	int a1[20],a2[20];
	int i,j,count=0;
	scanf("%d",&n1);
	for (i=0;i<n1;i++)
	  scanf("%d",&a1[i]);
	scanf("%d",&n2);
	for (j=0;j<n2;j++)
	  scanf("%d",&a2[j]);
	for (i=0;i<n2;i++)
	{  j=0;
	   while (j<n1) {
	          if (a2[i]==a1[j]) {
	                count=count+1;
	                j=j+1;
	                continue; } } }
	printf("%d\n",count);
	 for (i=0;i<n1;i++)
	   printf("%d\t",a1[i]);
	  printf("\n");
	 for (j=0;j<n2;j++)
	   printf("%d\t",a2[j]);
	   printf("\n");
	   if (count==n2)
	  printf("YES\n");
	else
	  printf("NO\n");
	return 0; }