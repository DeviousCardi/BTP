#include <stdio.h>
int main(){
    int a[100],n,num;
    scanf("%d",&n);
    for(int i=0;i<100;i++)
    a[i]=0;
    for(int i=0;i<n;i++) {
        scanf("%d",&num);
        a[num-1]++; }
    for(int i=0;i<100;i++) {
        for(int j=0;j<a[i])
        printf("%d ",i+1); }
    printf("end");
    return 0; }