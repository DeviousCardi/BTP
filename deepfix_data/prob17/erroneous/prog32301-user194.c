#include <stdio.h>
int main() {
	int i,j,n1,n2,x=0;
	int a[20],b[20];
	scanf("%d",&n1);
	for(i=0;i<n1;i++)
	    scanf("%d",&a[i]);
	scanf("%d",&n2);
	for(i=0;i<n2;i++)
	    scanf("%d",&b[i]);
	for(i=0;i<n1;i++) {
	    if(b[0]==a[i]) {
	    for(j=0,k=i;j<n2;j++,k++) {
	    if(b[j]!=a[k])
	        break;
	   else
	        x=x+1 } } }
	if(x==n2)
	    printf("YES");
	else
	    printf("NO");
	return 0; }