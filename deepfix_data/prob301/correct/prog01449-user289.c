#include <stdio.h>
#include <stdlib.h>
int main() {
    int n,i,j,count,max,k;
    scanf("%d\n",&n);
    int a[10];
    for(i=0;i<n;i=i+1) {
        scanf("%d",&a[i]); }
    for(j=0;j<n;j=j+1) {
        count=0;
    for(k=0;k<n;k=k+1) {
       if(a[j]==a[k])
      { printf("%d",a[k]);}
       else {continue;}
    }}
	return 0; }