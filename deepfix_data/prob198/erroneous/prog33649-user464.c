#include <stdio.h>
#include <stdlib.h>
int main() {
	int n1,n2,i,j,c[50],a[50],b[50],temp,d=0;
	scanf("%d",&n1);
	for(i=0;i<n1;i++)
	scanf("%d",&a[i]);
	scanf("%d",&n2);
	for(i=0;i<n2;i++)
	scanf("%d",&b[i]);
	for(i=0;i<n1;i++){c[i]=0;
	    for(j=0;j<n2;j++){
	        if(a[i]==b[j]) a[i]=0;
	       else c[i]=a[i]; } }
	for(i=0;i<n1;i++){
	    for(j=i;j<n1;j++){
	        if(c[i]>c[j]){
	            temp=c[i];
	            c[i]=c[j];
	            c[j]=temp; } } }
	for(i=0;i<n1;i++){
	    if(c[i]!=0) {d=c[i];break;} }
	if (d!=0)printf("%d",d);
	else printf("NO):
	return 0; }