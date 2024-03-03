#include <stdio.h>
int main(){
    int n,i,count=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    int k=a[0];
    count++;
    do{
        k=a[k-1];
        count++;
    }while(k!=a[0]);
    printf("%d",count);
    count=1;
    do{
        k=a[k-1];
        count++;
    }while(k!=a[0]);
    printf(" %d",count);
    return 0; }