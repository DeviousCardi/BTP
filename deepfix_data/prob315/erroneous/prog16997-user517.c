#include <stdio.h>
#include <stdlib.h>
int main() {
    int N;
    int a[1000];
    scanf("%d",&N);
    for(i=0;i<N;i++){
        scanf("%d",&a[i]); }
    for(j=0;j<N;j++){
        if(a[j+1]<a[j]){
            a=a[j+1];
            a[j+1]=a[j];
            a[j]=a;
            sum=sum++; }
        if(a[j+1]<a[j]){
            continue; } }
	return 0; }