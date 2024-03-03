#include <stdio.h>
int main() {
	int n,i,j,flag=0;
	scanf("%d",&n);
	int a[51];
	for (i=0;i<n;i++){
	    scanf("%d",&a[i]); }
	for (i=0;i<n;i++){
	    for (j=0;j<n;j++){
	        if (a[i]==a[j]){
	            printf("YES");
	            flag=1;
	            break; } }
	    if(flag==1){
	        break; } }
	if (flag==0){
	    printf("NO"); }
	return 0; }