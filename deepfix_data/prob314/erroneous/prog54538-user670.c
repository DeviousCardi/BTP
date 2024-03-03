#include <stdio.h>
#include <stdlib.h>
int main() {
int n,i,j,c,t;
int a[n];
int h[t];
scanf("%d",&n);
for(i=0;i<n;i++){
    scanf("\n%d",&a[i]); }
scanf("\n%d",&t);
for(j=0;j<t;j++){
    scanf("\n%d",&h[j]); }
 if(a[n-1]>a[n]&& a[n]<a[n+1]){
     printf("Yes"); }
 else {printf("No") } } }
	return 0; }