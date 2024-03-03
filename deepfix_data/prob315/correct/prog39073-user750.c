#include <stdio.h>
#include <stdlib.h>
int main() {
    int n=0,i=0,j=0;
    scanf("%d\n",&n);
    int a[n],b[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]); }
    for(i=0;i<n;i++){
        int count=0;
        for(j=i+1;j<n;j++){
            if(a[i]>a[j]){
                count++; }
            b[i]=count; } }
    int sum=0;
    for(i=0;i<n;i++){
        sum=sum+b[i]; }
    printf("%d\n",sum);
    for(i=0;i<n;i++){
        printf("%d",b[i]); }
	return 0; }