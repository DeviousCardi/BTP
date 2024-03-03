#include <stdio.h>
int main(){
    int n,i;
    int a[n];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++)
        if(a[i]==1)
            ind=i;
    k=a[0];
    do{
        k=a[k-1];
        count++;
    }while(k!=a[0])
    printf("%d",count);
    return 0; }