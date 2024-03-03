#include <stdio.h>
int main() {
	int n1,n2,i,j,t=0;
	    scanf("%d\n",&n1);
	int a[n1];
	for(i=0;i<=n1-1;i++){
	    scanf("%d",&a[i]); }
	    scanf("\n");
		scanf("%d\n",&n2);
	int b[n2];
	for(i=0;i<=n2-1;i++){
	    scanf("%d",&b[i]); }
	for(i=0;i<=n1-1;i++){
	    if(b[0]==a[i]){
	        for(j=1;j<=n2-1;j++){
	          if(b[j]==a[i+j])t++; } } }
	if(t==n2-1)printf("YES");
	        else printf("NO");
	return 0; }