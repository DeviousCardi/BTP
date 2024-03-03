#include <stdio.h>
#include <stdlib.h>
int main() {
    int n,a[10000],i,j,count,max,var;
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]);
        if((a[i]>100000||a[i]<0.00001)||n>10000) {
            return 0; } }
    for(i=0;i<n;i++) {
       count=0,max=0,var=0;
       for(j=i+1;j<n;j++) {
           if(a[i]==a[j]) {
              count++; } }
       if(count>max){
           max=count;
           var=a[i];
       }count=0; }
    printf("%d",var);
	return 0; }