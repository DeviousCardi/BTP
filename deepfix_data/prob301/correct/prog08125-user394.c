#include <stdio.h>
#include <stdlib.h>
int main() {
    int a[10000],b[10000],i,j,count,n,max;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]); }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if((a[i]=a[j])&&(i!=j)){count=0;
            count=count+1;} }
        b[i]=count; }
    printf("%d",b[1]);
    max=b[0];
    for(i=0;i<n;i++){
        if(max<=b[i]){(max=b[i]);} }
    printf("%d",max);
	return 0; }