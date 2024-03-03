#include <stdio.h>
int main() {
    int a[100000];
    int n,k,i,j;
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++){
        scanf("%d ",&a[i]); }
    int max,pos,temp;
    for(i=0;i<n-1;i++){
        max=a[i];pos=i;
        for(j=i;j<n;j++){
            if(max<a[j]){
                max=a[j];
                pos=j; } }
        temp=a[pos];
        a[pos]=a[i];
        a[i]=temp; }
    printf("%d",a[k-1]);
    return 0; }