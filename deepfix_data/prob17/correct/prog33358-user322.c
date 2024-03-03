#include <stdio.h>
int main() {
	int n1,n2;
	scanf("%d\n",&n1);
	int a[20],b[20],p,r,i;
	for(i=0;i<n1;i++)
	scanf("%d",&a[i]);
	scanf("\n%d\n",&n2);
	for(i=0;i<n1;i++)
	scanf("%d",&b[i]);
	for(p=0;p<n1;p++){
	    r=0;
	    for(i=0;i<n2;i++){
	        if (a[i+p]==b[i])
	        r=r+1; }
	    if(r==n2){
	    break; } }
	if(r==n2){
	    printf("YES"); }
	 else{
	      printf("NO"); }
    	return 0; }