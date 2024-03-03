#include <stdio.h>
#include <stdlib.h>
int main() {
int n,i;
int *a;
scanf("%d\n",&n);
a=(int*)malloc(n*sizeof(int));
for(i=0;i<n;i++){
    scanf("%d",&a[i]); }
int count1=0;
int count2=0;
int sum1=0;
int sum2=0;
for(i=0;i<n;i++){
    sum1=sum1+a[i];
    sum2=sum2+a[n-i-1];
    if(sum1>=sum2&&i!=n-i-1){
    count1++;}
    if(sum1<sum2 && i!=n-i-1)
    count2++; }
for(i=0;i<n;i++){
    printf("%d %d",count1,count2); }
	return 0; }