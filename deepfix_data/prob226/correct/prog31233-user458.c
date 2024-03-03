#include <stdio.h>
int main() {
int d,n,i,a[n+1],b[d],sum=0;
scanf("%d %d\n",&d,&n);
for(i=0;i<d;i++){
    scanf("%d ",&b[i]); }
 while(n<=d){
      for(i=n-d;i<n-1;i++){
    sum=sum+a[i]; }
printf("%d",sum)  ;}
	return 0; }