#include <stdio.h>
#include <stdlib.h>
int a,b;
int max(inta,intb){
    if(a>=b)
    {return a;}
    else
  return b; }
int main() {
	int i,n,a[100];
	scanf("%d",&n);
	for(i=0;i<n;i++) {
	    scanf("%d",&a[i]); }
	for(i=0;i<n;i++) {
	    if(a[i]==a[i+1]) {
	        printf("%d",a[max(i,i+1)]); }
}	return 0; }