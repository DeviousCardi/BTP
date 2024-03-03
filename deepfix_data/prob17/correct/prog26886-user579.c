#include <stdio.h>
int main() {
	int n1,n2,x=0,i,j,t,a[20],b[20];
	scanf("%d",&n1);
	for(i=0;i<n1;i++)
	scanf("%d",&a[i]);
	scanf("%d",&n2);
	for(i=0;i<n2;i++)
	scanf("%d",&b[i]);
    for(i=0;i<n1;i++) {
       if(b[0]==a[i])
       t=i; }
	for(i=0;i<n2;i++) {
	   for(j=t;j<t+n2;j++) {
	       if(a[t]==b[i]) {
	           x=1; } } }
	if(x==1)
	printf("YES");
	else
	printf("NO");
	return 0; }