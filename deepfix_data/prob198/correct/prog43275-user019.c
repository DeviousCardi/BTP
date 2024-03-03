#include <stdio.h>
#include <stdlib.h>
int main() {
	int n1,n2,a[20],b[20],m=0,i,j,s,t;
	scanf("%d",&n1);
	for(i=1;i<=n1;i++)
	scanf("%d",&a[i]);
	scanf("%d",&n2);
	for(i=1;i<=n2;i++)
	scanf("%d",&b[i]);
	s=100;
	for(i=1;i<=n1;i++) {
	    m=0;
	    for(j=1;j<=n2;j++) {
	        if(a[i]==b[j])
	        m=1; }
	    if(s>a[i]&&m==0) {
	    t=s;
	    s=a[i];
	    a[i]=t; } }
	if(s==100)
	printf("NO");
	else
	printf("%d",s);
	return 0; }