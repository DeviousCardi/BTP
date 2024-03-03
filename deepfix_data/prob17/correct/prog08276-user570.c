#include <stdio.h>
int main() {
    int count,i,j,arr1[20],arr2[20],n1,n2;
    scanf("%d",&n1);
    scanf("%d",&n2);
	for(i=0;i<n1;i++) {
	    for(j=0;j<n2;j++) {
	       scanf("%d ",&arr2[j]);
	       while(arr2[j]!=arr1[i])
	       continue;
	       while(arr2[j]=arr1[i])
	       break;
	       if(arr2[j]!=arr1[i])
	       count=0;
	       if(arr2[j]==arr1[i])
	       count=1; } }
	if(count==1)
    printf("YES");
    if(count==0)
	printf("NO");
	return 0; }