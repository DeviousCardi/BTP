#include <stdio.h>
int main() {
	int a[50],b[50],m,n,i=0,j,flag,k=100;
	scanf("%d\n",&m);
	for(i=0;i<m;i++)
	scanf("%d ",&a[i]);
	scanf("\n%d",&n);
	for(j=0;j<n;j++)
	scanf("%d ",&b[i]);
    for(i=0;i<m;i++) {
	    if(a[i]==b[0] && i<k) {
	        k=i;
	        for(j=1;j<n;j++) {
	            if(b[j]==a[k+j])
	            flag=1;
	            else
	            break; } } }
	if(flag==1)
	printf("YES");
	else
	printf("NO");
	return 0; }