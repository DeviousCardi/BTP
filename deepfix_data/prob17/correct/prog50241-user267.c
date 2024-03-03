#include <stdio.h>
int main() {
	int n1,n2;
	scanf("%d\n",&n1);
	int a[n1];
	int i,j;
	      for(i=0;i<n1;i++)
	            scanf("%d",&a[i]);
	scanf("%d\n",&n2);
	int b[n2];
	      for(i=0;i<n2;i++)
	             scanf("%d",&b[i]);
	int p=0,k=0,q=n1;
	if(n1>n2){
	    for(i=0;i<n2;i++){
	        for(j=p;j<q;j++){
	            if(b[i]==a[j]){
	            k=k+1;
	            p=j;
	            q=j+n2-1-k;
	            printf("%d%d\n",b[i],a[j]);
	            break; } } } }
	if(k==n2) printf("YES");
	else printf("NO");
	return 0; }