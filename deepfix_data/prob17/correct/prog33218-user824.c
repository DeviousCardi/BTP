#include <stdio.h>
int main() {
	int n,m,a[20],b[20];
	scanf("%d\n",&n);
	for(int i=0;i<n;i++)
	scanf("%d",&a[i]);
	scanf("\n%d",&m);
	for(int j=0;j<m;j++)
	scanf("\n%d",&b[j]);
	for(int j=0;j<m;j++) {
	    for(int i=0;i<n;i++) {
	        if(b[j]!=a[i])
	        {printf("NO");
	        break;}
	        else
	        printf("YES"); } }
	return 0; }