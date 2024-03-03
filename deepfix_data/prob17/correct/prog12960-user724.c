#include <stdio.h>
int main() {
	int num,num2,a[20],b[20],i,j,count=0;
	scanf("%d\n",&num);
	for(i=0;i<num;i++) {
	    scanf("%d ",&a[i]); }
	scanf("%d\n",&num2);
	for(j=0;j<num2;j++) {
	    scanf("%d ",&b[j]); }
	for(i=0;i<num;i++)
	{count=0;
	    if(a[i]==b[0])
	    {printf("k");
	        for(j=i;j<(i+num2);j++) {
	            if(a[j]==b[j-i])
	            count=count+1; }
	        if(count==num2) {
	            printf("YES");
	            break; } } }
	return 0; }