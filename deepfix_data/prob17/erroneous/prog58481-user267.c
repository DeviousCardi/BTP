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
	int p=n1,k=0;
	if(n1>n2){
	    for(i=0;i<n2,i++){
	        for(j=0;j<p;j++){
	            if(b[i]==a[j]){
	            k=k+1;
	            p=j+n2-1; } } } }
	return 0; }