#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i;
	scanf("%d",&n);
	int a[100],count=1;
	a[0]=n%10;
	for(i=1;i<=100;i++) {
	    if(n/(i*10)==0)
	    break;
	    else{
	    a[i]=(n/(i*10))%10;
	    count++; } }
	for(i=0;i<count/2;i++) {
	    if(a[i]==a[count-i])
	    continue;
	    else {
	    printf("NO");break; } }
	if(i==count/2+1)
	printf("YES");
	return 0; }