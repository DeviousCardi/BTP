#include <stdio.h>
#include <stdlib.h>
int main() {
	int num,r,a,b,count=0,g,h,v,k,c,z;
	scanf("%d",&num);
	r=num%10;
	a=num;
	b=num;
	c=num;
	num=num/10;
    while(num!=0); {
	count=count+1;
	r=r%10;
	num=num/10; }
	int arr[count];
	for(k=0;k<count;k++) {
	   g=a%10;
	   a=a/10;
	   arr[k]=g; }
	int given[count];
	for(v=0;v<count;v++) {
	    h=b%10;
	    b=b/10;
	    given[v]=h; }
	for(z=0;z<c;z++){
	if(arr[z]==given[z])
	printf("YES");
	else
	printf("NO"); }
	return 0; }