#include <stdio.h>
#include <stdlib.h>
int main() {
    int array[100000];
    int n,i,j,sum=o,t=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",array[i]); }
    for(i=0;i<n;i++){
        for(j=0;j<i;j++){
            scanf("%d",array[j]);
            j++; } }
    t=array[i]+array[j];
    if(array[i]>o){
    printf("%d of t is true",t); }
    else
    printf("%d of t is false",t);
    sum=sum+t;
    printf("%d",sum);
    sum++;
	return 0; }