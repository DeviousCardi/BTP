#include <stdio.h>
#include <stdlib.h>
int main() {
int l,i;
scanf("%d\n",&l);
int *a;
a=(int*)malloc(l*sizeof(int));
for(i=0;i<l;i++){
    scanf("%d",&a[i]); }
int count1=0;
int count2=0;
for(i=0;i<l;i++){
    if(a[i]>=a[l-i-1]&&i!=l-i-1){
    a[i+1]=a[i+1]-a[l-i-1];
    count1++;}
    else{
    a[l-i-2]=a[l-i-2]-a[i];
    count2++;} }
for(i=0;i<l;i++){
    printf("%d %d",count1,count2); }
	return 0; }