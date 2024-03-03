#include <stdio.h>
int main(){
    int a1,a2,n;
    scanf("%d %d %d",&a1,&a2,&n);
    int arr[n];
    arr[0]=a1;
    arr[1]=a2;
    for(int i=2;i<n;i++){
        arr[i]=arr[i-1]+arr[i-2]-2; }
    printf("%d\n",arr[n-1]);
    return 0; }