#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,n,a[n],j,q;
	 scanf("%d",&n);
	 for(i=0;i<n;i++){
	    scanf("%d",&a[i]); }
	  int p=0;
	 for(j=0;i<n;j++){
	    for(q=0;q<n;q++) {
	   if((a[j])!=(a[n-j])){
	       break;}
	       p=0; }
	  if(p==0)
	  printf("NO");
	  else
	  printf("YES"); } }
	return 0; }