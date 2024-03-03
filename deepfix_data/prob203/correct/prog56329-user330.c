#include <stdio.h>
int main() {
	int n,i,j,c=0;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<=n-1;i++){
	    scanf("%d",&a[i]);
	    for(j=0;j<=i-1;j++){
	      if(a[j]==a[i]){
	          printf("YES");
	          c++;
	          break; } }
	    if(c!=0)break; }
	if(c==0)printf("NO");
	return 0; }