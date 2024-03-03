#include <stdio.h>
int main() {
    int i,j,l,m,n,count;
     int a[21],b[21];
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
	     break;}}
	 for(l=i+1;l<m;l++) {
	    if(a[i+1]==a[j+1]){continue;}
	   else{printf("NO");
	   return 0;} }
	}}}
if(count!==0)
{printf("YES");
else{printf("NO");
   return 0; }