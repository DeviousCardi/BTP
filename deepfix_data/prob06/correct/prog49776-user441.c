#include <stdio.h>
#include <stdlib.h>
int main() {
	int m,n,x,y,i,j=0;
	scanf("%d%d%d%d ",&n,&m,&x,&y);
	int a[m],b[n];
	for(i=0;i<n;i++){
	    scanf("%d",&a[i]); }
	for(i=0;i<m;i++){
	    scanf("%d", &b[i]); }
	int c[m][2];
	for(i=0;i<n;i++) {
    	if(j==m){
      	 break;}
	    if((a[i]+y)>=b[j]&& (a[i]-x)<=b[j]) {
	        c[j][0]=i+1;
	        c[j][1]=j+1;
	        j++; } }
	  printf("%d\n",j);
	for(i=0;i<j;i++){
	    printf("%d %d\n",c[i][0],c[i][1]); }
	return 0; }