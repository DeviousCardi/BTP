#include <stdio.h>
#include <stdlib.h>
int main() {
    int i,j,x,n,a[1000],count=0,count1=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]); }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if((a[i]>a[j]) && (i<j)){
                x=a[i];
                a[i]=a[j];
                a[j]=x;
                count=count+1; } }
    }printf("%d\n",count);
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(a[i]>a[j]){
                count1=count1+1; } }
         printf("%d",count1); }
	return 0; }