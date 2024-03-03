#include <stdio.h>
int main() {
	int n,i,j,count=0;
	int a[50];
	scanf("%d",&n);
	for(i=0;i<50;i++) {
	    scanf("%d",&a[i]);
	    printf("%d",a[i]); }
	for(i=0;i<50;i++) {
	    for(j=0;j<50;j++) {
	        if(a[i]==a[j]&&(i=j))
	            continue;
	        if(a[i]==a[j]&&i!=j)
	            count++; } }
	if(count>0)
	    printf("YES");
	else
	    printf("NO");
return 0; }