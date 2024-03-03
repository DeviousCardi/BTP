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
	for(j=n-1;j>=0;j--){
	    scanf("%d\n",&a[j]); }
	int k;
	for(k=m-1;k>=0;k--){
	    scanf("%d\n",&b[k]); }
	int arr[500],l;
	    for(l=max(m,n)-1;l>=0;l--){
	        arr[l]=a[l]+b[l];
	        arr[l-1]=a[l-1]+b[l-1]+arr[l]/10; }
	int display;
	for(display=o;display<max(m,n)+1;display++){
	    printf("%d",arr[display]); }
	return 0; }