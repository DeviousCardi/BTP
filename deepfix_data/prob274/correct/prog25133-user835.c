#include <stdio.h>
int main() {
    int num,a[100],i,j,h,k,temp;
    scanf("%d",&num);
    for(i=0;i<num;i++) {
        scanf("%d ",&a[i]); }
    for(j=0;j<num;j++) {
        for(k=0;k<num;k++) {
            if(a[j]>=a[k]) {
                temp=a[j];
                a[j]=a[k];
                a[k]=temp; } } }
    for(h=0;h<num;h++) {
        printf("%d ",a[h]); }
    return 0; }