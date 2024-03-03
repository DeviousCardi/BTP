#include<stdio.h>
int main() {
    int N,max=0,i,j,k,count=1,temp=1;
    int a[25],b[25];
    scanf("%d\n",&N);
    for(i=0;i<N;i++){
        scanf("%d ",&a[i]); }
    for(j=0;j<N;j++){
        b[temp]=a[j];
        count=1;
        for(k=temp+1;k<N;k++) {
            if(a[k]>a[temp]) {
                a[k]=b[j+1];
                count=count+1;
                printf("%d ",count); }
            else
                continue;
            if(count>max) {
                max=count; }
                temp=temp+1; } }
    printf("%d",max);
    return 0; }