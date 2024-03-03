#include <stdio.h>
int main() {
	int n1,n2,a[20],b[20],k[30],count=0,flag=1;
	scanf("%d",&n1);
	for(int i=0;i<n1;i++){
	    scanf("%d",&a[i]); }
	scanf("%d",&n2);
	for(int i=0;i<n2 && flag==1;i++){
	    scanf("%d",&b[i]);
	    for(int j=0;j<n1 && flag==1;j++){
	        if(a[j]==b[i]){
	        scanf("%d",&b[i+1]);
	        if(a[j+1]==b[i+1]){
	          printf("YES");
	          flag=0; }
	       else
	       continue; } } }
	if(flag==1)
	printf("NO");
	return 0; }