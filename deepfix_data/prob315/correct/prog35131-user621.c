#include <stdio.h>
#include <stdlib.h>
int main() {
    int n=0,count=0;
    scanf("%d",&n);
    int number[n];
    int inv[n];
    for(int i=0;i<n;i++) {
	   inv[i]=0; }
    for(int i=0;i<n;i++) {
	   scanf("%d",&number[i]); }
	for(int i2=0;i2<n;i2++) {
       count=0;
       for(int i3=i2+1;i3<n;i3++) {
            if(number[i2]>number[i3]) {
                count++;
                inv[i2]=count; } } }
    int sum=0;
    for(int i=0;i<n;i++) {
	    sum=sum+inv[i]; }
	printf("%d\n",sum);
	for(int i=0;i<n;i++) {
	    printf("%d ",inv[i]); }
	return 0; }