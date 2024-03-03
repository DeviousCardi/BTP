#include <stdio.h>
#include <stdlib.h>
int max(int a,int b){
    if(a>b){
        return a; }
    return b; }
int main() {
	int a[500],b[500],n,m;
	scanf("%d %d\n",&n,&m);
	int i;
	for(i=0;i<500;i++){
	    a[i]=0;
	    b[i]=0; }
	int j;
	for(j=500-n;j<500;j++){
	    scanf("%d\n",&a[j]); }
	int k;
	for(k=500-m;k<500;k++){
	    scanf("%d\n",&b[k]); }
	int arr[500],l,c;
	c=max(m,n);
	    for(l=500-c;l<500;l++){
	        arr[l]=a[l]+b[l];
	        arr[l-1]=a[l-1]+b[l-1]+arr[l]/10; }
	int display;
	for(display=500-c;display<500;display++){
	    printf("%d",arr[display]); }
	return 0; }