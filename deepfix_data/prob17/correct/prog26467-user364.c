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
	for(i=0;i<m;i++) {
	 for(j=0;j<n;j++) {
	 if(a[i]==b[j]){
	     count=count+1;
	 for(l=i+1;l<m;l++) {
	     p=j;
	    if(a[l]==a[l]){continue;}
	   else{printf("NO");
	  return 0; }
	    p=p+1;
	 }}} }
if(count>0)
{printf("YES");}
else{printf("NO");}
   return 0; }