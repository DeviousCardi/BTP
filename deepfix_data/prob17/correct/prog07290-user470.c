#include <stdio.h>
int main() {
	int n1,count=0;
	scanf("%d",&n1);
	int a1[20];
	for(int i=0;i<n1;i++){
	    scanf("%d",&a1[i]); }
	int n2;
	scanf("%d",&n2);
	int a2[20];
	for(int j=0;j<n2;j++){
	    scanf("%d",&a2[j]); }
	for(int i=0;i<n1;i++){
	    if(a2[count]==a1[i]){
	        count++;
	        if(count==n2-1){
	            printf("YES"); } } }
	return 0; }