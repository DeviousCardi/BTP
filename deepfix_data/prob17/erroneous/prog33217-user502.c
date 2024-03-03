#include <stdio.h>
int main() {
	int n1;
	scanf("%d",&n1)
	int p=0;int a1[n1];int flag=1;
	for(int i=0;i<n1;i++) {
	    scanf("%d",&a1[i]); }
	int n2;
	scanf("%d",&n2)
	int a2[n2];
	for(int i=0;i<n2;i++) {
	    scanf("%d",&a2[i]); }
	 for(int i=0;i<n1;i++) {
	     if (a1[i]==a2[0]) {
	         break;
	     }p++; }
	 for(int i=0;i<n2;i++){
	  if(a2[i]==a1[p]){
	      flag=0;
	      p++;} }
	  if(flag==0){
	     printf("YES"); }
	 else printf("NO");
	return 0; }