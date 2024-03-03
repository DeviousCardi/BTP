#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int main() {
	int a[25],b[25],i,j,min=pow(2,31)-2,m,n,t=0,k=-1,x=min,count=0;
	scanf("%d",&m);
	for(i=0;i<m;i++) {
	    scanf("%d",&a[i]); }
	scanf("%d",&n);
	for(j=0;j<n;j++) {
	    scanf("%d",&b[j]); }
	for(i=0;i<m;i++) {
	    printf("here v go -- a[i] = %d\n\n",a[i]);
	    for(j=k+1;j<n;j++) {
	        if(a[i]==b[j]) {
	            k=j;
	            printf("!!k = j = %d!!",k);
	            count++;
	            break; } }
	        printf("      %d       ",i);
	        if(count==0)
	        x=a[i];
	            printf("----%d----",x);
	            if(min>x) {
	                printf("&&%d&&",x);
	            min=x;
	            printf("min is %d\n",min); }
	            printf("starting i loop again"); }
	    printf("@@%d@@",min);
	return 0; }