#include <stdio.h>
int main() {
	int n1,n2,a[20],b[20],k[30],count=0;
	scanf("%d",&n1);
	for(int i=0;i<n1;i++){
	    scanf("%d",&a[i]); }
	scanf("%d",&n2);
	for(int i=0;i<n2;i++){
	    scanf("%d",&b[i]);
	    int c=0;
	    for(int j=0;j<n1;j++){
	        if(a[j]==b[i]){
	        c++; }
	       k[i]=c; } }
	for(int i=0;i<30;i++){
	    if(k[i]==1){
	        if(k[i+1]==1){
             count++;
	        printf("YES");
	        break; } } }
	if(count==0)
	printf("NO");
	return 0; }