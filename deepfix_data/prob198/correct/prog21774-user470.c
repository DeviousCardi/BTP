#include <stdio.h>
int main() {
	int n1,x,p;
	scanf("%d",&n1);
	int a1[20];
	for(int i=0;i<n1;i++){
	    scanf("%d",&a1[i]); }
	int n2;
	scanf("%d",&n2);
	int a2[20];
	for(int i=0;i<n2;i++){
	    scanf("%d",&a2[i]); }
	for(int i=0;i<n1;i++){
	    for(int j=i;j<n1;j++){
	        if(a1[i]>a1[j]){
	            x=a1[i];
	            a1[i]=a1[j];
	            a1[j]=x; } } }
	for(int i=0;i<n1;i++){
	    for(int j=0;j<n2;j++){
	      if(a1[i]==a2[j]){
	          p=0;
	          break; }
	      else{
	          p=1; } }
	    if(p==1){
	        printf("%d",a1[i]);
	        return 0; } }
	printf("NO");
	return 0; }