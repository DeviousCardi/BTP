#include <stdio.h>
int main() {
    int p,i,j,l,m,n,count;
     int a[21],b[21];
    count=0;
    p=0;
    scanf("%d \n",&n);
    for(i=0;i<n;i++) {
    scanf("%d",&a[i]); }
	scanf("\n");
	scanf("%d",&m);
	for(i=0;i<m;i++) {
	 scanf("%d",&b[i]); }
	 for(j=0;j<n;j++) {
	 if(b[i]==a[j]){
	     count=count+1;
	     i=0;
	 for(l=i+1;l<i+m;l++) {
	     p=j;
	    if(a[p+1]==b[l]) {
	        p=p+1;
	        continue;}
	   else{printf("NO");
	  return 0; }
	 }} }
printf("YES");
   return 0; }