#include<stdio.h>
int main() {
    int N,max,i,j,k,count=1;
    int a[25],b[25];
    scanf("%d\n",&N);
    for(i=0;i<N;i++){
        scanf("%d ",&a[i]); }
    for(j=0;j<N;j++){
        b[j]=a[j];
        count=1;
        for(k=j+1;k<N;k++) {
            if(a[k]>a[j]) {
                a[k]=b[j+1];
                count=count+1; }
            else
                count=0;
            if(count>max) {
                max=count;
                printf("%d",max); } } }
    return 0; }