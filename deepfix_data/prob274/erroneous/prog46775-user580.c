#include <stdio.h>
#include<stdlib.h>
int main(){
    int a[100],b[100],n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
        b[0]=1;
        b[1]=a[0];
    for(int i=2;i<n;i++) {
        int temp=a[i-]-1;
        b[i]=a[temp];
        for(int j=0;j<i;j++)
            if(b[j]==b[i]) {
                printf("%d\n",b[4]);
                printf("%d %d",i,i-j);
                exit(0); } }
    return 0; }