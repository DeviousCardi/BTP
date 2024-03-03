#include <stdio.h>
int main() {
	int n1;int i,j,k=0;
	scanf("%d",&n1);
	int a1[n1];
	for(i=0;i<n1;i++)
	   scanf("%d",&a1[i]);
	   int n2;
	   scanf("%d",&n2);
	   int a2[n2];
	for(i=0;i<n2;i++)
	   scanf("%d",&a2[i]);
	if(n1<n2)
	printf("NO");
	else {
	   for(i=0;i<(n1-n2);i++) {
	       if(a1[i]==a2[0]) {
	           for(j=1;j<n2;j++) {
	               if(a2[j]!=a1[i+j])
	               k=1; } }
	       else
	       k=1;
	       if(k==1)
	       continue; }
	   if(k==0)
	   printf("YES");
	   else
	   printf("NO"); }
	return 0; }