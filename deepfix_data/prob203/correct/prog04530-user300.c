#include <stdio.h>
int dup(int a,int d[100])
{ int f=0;
  for(int i=0;i<a;i++) {
	    for(int j=i+1;j<a;j++) {
	        if(d[i]==d[j])
	        {f=1; break;} }
	    if(f) {return f;} } }
int main() {
	int a[50];
	int i,n,k=0;
	scanf("%d\n",&n);
	for(i=0;i<n;i++)
	{scanf("%d",&a[i]);
	k=dup(n,a); }
	if(k) printf("YES\n");
	else printf("NO\n");
	return 0; }