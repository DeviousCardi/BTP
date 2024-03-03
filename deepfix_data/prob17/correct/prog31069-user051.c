#include <stdio.h>
int main() {
	int n1,arr1[20],n2,arr2[20],i,j,flag=0;
	scanf("%d",&n1);
	for(i=0;i<n1;i++) {
	    scanf("%d",&arr1[i]); }
	scanf("%d",&n2);
	for(i=0;i<n2;i++) {
	    scanf("%d",&arr2[i]); }
	for(j=0;j<n1;j++) {
	    if(arr2[0]==arr1[j])
            break; }
	for(i=0;i<n2;i++) {
	    while(j<n1) {
	        if(arr2[i]!=arr1[j]) {
	            flag=1;
	            break; }
	        j++; } }
	if(flag==0)
	    printf("YES");
	else
	    printf("NO");
	return 0; }