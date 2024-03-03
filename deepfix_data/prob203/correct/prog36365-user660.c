#include <stdio.h>
int main() {
	int n,a[50],flag,i,j,k;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	    scanf("%d",&a[i]);
	for(j=0;j<n;j++) {
	        for(k=0;k<n;k++) {
	                if(j==k)
	                    continue;
	                if(a[j]==a[k]) {
	                        flag=1;
	                        break; } }
	        if(flag==1)
	            break; }
	 if(flag==1)
	    printf("YES");
	 else
	    printf("NO");
	return 0; }