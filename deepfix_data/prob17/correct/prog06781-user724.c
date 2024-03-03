#include <stdio.h>
int main() {
	int num,num2,a[20],b[20],i,j,count=0;
	scanf("%d\n",&num);
	for(i=0;i<num;i++) {
	    scanf("%d",&a[i]); }
	scanf("%d\n",&num2);
	for(j=0;j<num2;j++) {
	    scanf("%d",&b[i]); }
	for(i=0;i<num;i++) {
	    if(a[i]==b[0]) {
	        for(j=i;j<(i+num2);j++) {
	            if(a[i]==b[j-i])
	            count=count+1; }
	        if(count==num2) {
	            printf("YES");
	            break; } } }
	return 0; }