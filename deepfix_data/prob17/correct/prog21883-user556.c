#include <stdio.h>
int main() {
	int n1,n2;int i,j,k=0;
	scanf("%d%d",&n1,&n2);
	int a1[n1],a2[n2];
	for(i=0;i<(n1-n2);i++)
	   scanf("%d",&a1[i]);
	for(i=0;i<n2;i++)
	   scanf("%d",&a2[i]);
	if(n1<n2)
	printf("NO");
	else {
	   for(i=0;i<n1;i++)
	   {k=0;
	       if(a1[i]==a2[0]) {
	           for(j=1;j<n2;j++) {
	               if(a2[j]!=a1[i+j])
	               k=1; } }
	       if(k==1)
	       continue; }
	   if(k==0)
	   printf("yes");
	   else
	   printf("no"); }
	return 0; }