#include<stdio.h>
int main(){
    int arr[3],s,p;
    float av;
    for(int i=0;i<3;i++)
        scanf("%d",&arr[i]);
    s=arr[0]+arr[1]+arr[2];
    p=arr[0]*arr[1]*arr[2];
    av=s/3;
    printf("%d\n%d\n%.3f",s,p,av);
    return 0; }