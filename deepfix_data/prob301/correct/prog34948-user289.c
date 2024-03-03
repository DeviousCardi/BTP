#include <stdio.h>
#include <stdlib.h>
int main() {
    int n,i,j,count,max,k;
    scanf("%d",&n);
    int a[10000];
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    for(j=0;j<n;j++) {
        count=1;
    for(k=0;k<n;k++) {
       if((j<k)&&(a[i]==a[k]))
       {count=count+1;}
       else {continue;} }
       max=0;
       if(count>=max)
       {count=max;}
       else {continue;} }
       printf("%d",count);
	return 0; }