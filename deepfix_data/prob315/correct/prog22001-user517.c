#include <stdio.h>
#include <stdlib.h>
int main() {
    int N,i,j,sum=0,b;
    int a[1000];
    scanf("%d",&N);
    for(i=0;i<N;i++){
        scanf("%d",&a[i]); }
    for(j=0;j<N;j++){
        if(a[j+1]<a[j]){
            b=a[j+1];
            a[j+1]=a[j];
            a[j]=b;
            sum=sum++; }
        if(a[j+1]<a[j]){
            continue; } }
    printf("%d",sum);
	return 0; }