#include <stdio.h>
#include <stdlib.h>
int main() {
	int m,n, x,y,a[100000],b[100000],i,j,p=0;;
	scanf("%d%d%d",&n,&m,&x);
	scanf("%d\n",&y);
	for(i=0;i<n;i++){
	    if(i<n-1)
	    scanf("%d",&a[i]);
	    else
	    scanf("%d\n",&a[i]); }
	for(i=0;i<m;i++){
	    scanf("%d",&b[i]); }
for(i=0;i<m;i++){
    for(j=0;j<n;j++){
        if((b[i]-x)<=a[j]&&a[j]<=(b[i]+y)){
            p=p+1;
            j=i;
            break; } } }
      printf("%d\n",p);
for(i=0;i<m;i++){
    for(j=0;j<n;j++){
         if(b[i]-x<=a[j]&&a[j]<=b[i]+y){
            printf("%d %d\n",j+1,i+1);
            break; } } }
	return 0; }