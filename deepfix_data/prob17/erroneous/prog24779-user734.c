#include <stdio.h>
int main() {
	int n1,n2,i,j,flag=0;
	scanf("%d",&n1);
	int a[n1];
	for(i=0;i<n1;i++)
	scanf("%d",&a[i]);
	scanf("%d",&n2);
	for(i=0;i<n2;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n1;i++) {
	    if(b[0]==a[i]) {
	        flag=1;
	        break; } }
	if(flag==1) {
	    for(j=1;j<n2;j++)
	    if(b[j]=a[j+i])
	    flag=1;
	    else
	    flag=0; }
	else
	flag=0;
	if(flag==1)
	printf("YES");
	else
	printf("NO");
	return 0; }