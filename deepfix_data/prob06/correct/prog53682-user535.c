#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,m,x,y,i,j,s=0,sum=0;
	scanf("%d%d%d%d",&n,&m,&x,&y);
	int a[n],b[m],p[m],q[n];
	for(i=0;i<n;i++){
	    scanf("%d",a+i); }
	for(i=0;i<m;){
	    if((b[i]>=a[j]-x)&&(b[i]<=a[j]+y)){
	        p[s]=j+1;
	        q[s]=i+1;
	        i++;
	        j++;
	        s++;
	        sum++; }
	    else if(b[i]<a[j]-x){
	        i++; }
	    else if(b[i]>a[i]+y){
	        j++; } }
	printf("%d\n",sum);
	for(s=0;s<sum;s++){
	    printf("%d %d\n",p[s],q[s]); }
	return 0; }