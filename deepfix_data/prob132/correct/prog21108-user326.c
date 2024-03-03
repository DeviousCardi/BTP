#include<stdio.h>
int main() {
    int n,arr[1000];
    scanf("%d",&n);
    for(int i=0;i<n;i++)
        scanf("%d,",&arr[i]);
    int f[10];
    for(int i=0;i<10;i++)
        f[i]=0;
    for(int i=0;i<n;i++)
        f[arr[i]]=f[arr[i]]+1;
    int z=0;
    for(int i=0;i<10;i++)
        printf("%d",f[i]);
    for(int i=1;i<10;i++) {
            if(f[i]!=0)
                z++; }
    int count=0;
    for(int i=0;i<10;i++) {
        if((f[i]==i)&&(f[i]!=0))
            count++;
        if(f[0]!=0)
            count++; }
    if(z==(count))
        printf("Yes");
    else
        printf("No");
    return 0; }