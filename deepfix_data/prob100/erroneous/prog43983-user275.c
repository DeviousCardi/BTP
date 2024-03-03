#include<stdio.h>
#include<limits.h>
int main() {
    int m,n,min=0;
    scanf("%d%d",&n,&m);
    int a[m];
    for(inti=0;i<m;i++)
        a[i]=0;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            int temp;
            scanf("%d",&temp);
            if(temp>a[i])
                a[i]=temp; }
        if(a[i]<a[min])
            min=i; }
    printf("%d",a[i]);
    return 0; }