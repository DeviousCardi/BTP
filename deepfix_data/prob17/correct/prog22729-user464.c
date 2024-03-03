#include <stdio.h>
int main() {
	int n1,n2,a[20],b[20],i,j,c=0;
	scanf("%d",&n1);
	for(i=0;i<n1;i++){
	    scanf("%d",&a[i]); }
	scanf("%d",&n2);
	for (i=0;i<n2;i++){
	    scanf("%d",&b[i]); }
	for(i=0;i<n2-1;i++){
	    for(j=0;j<n1;j++){
	        if ((b[i]==a[j])&&(b[j+1]==a[i+1])){
	            c++;
	        break ;} } }
	if (c>=n2)printf("YES");
	else printf("NO");
	return 0; }