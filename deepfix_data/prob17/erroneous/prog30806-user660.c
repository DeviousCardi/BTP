#include <stdio.h>
int main() {
	int n1,n2,a1[20],a2[20],i,j,k,l,flag=0;
	scanf("%d",&n1);
	for(i=0;i<n1;i++)
	    scanf("%d",&a1);
	scanf("%d",&n2[i]);
	for(j=0;j<n;j++)
	    scanf("%d",&n2[j]);
	for(k=0;k<n1;k++) {
	       if(a1[k]==a2[0]) {
	            l=1;
	            while(l<n2) {
	                    if(a1[k+l]!=a2[l])
	                        break;
	                    if(l==n2-1)
	                        flag=1; } } }
	if(flag==1)
	    printf("YES\n");
	else
	    printf("NO\n");
	return 0; }