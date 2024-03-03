#include <stdio.h>
int dup(int a,int d[100]) {
  for(i=0;i<n;i++) {
	    for(int j=i+1;j<n;j++) {
	        if(a[i]==a[j])
	        {f=1; break;} }
	    if(f) {return f;} } }
int main() {
	int a[50];
	int i,f=0,n;
	scanf("%d\n",&n);
	for(i=0;i<n;i++)
	{scanf("%d",&a[i]); }
	if(f) printf("YES\n");
	else printf("NO\n");
	return 0; }