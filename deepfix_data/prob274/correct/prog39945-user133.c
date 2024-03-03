#include <stdio.h>
int main(){
    int n;
    int arr[n+1];
    scanf("%d",&n);
    arr[0]=0;
    for(int i=1;i<=n;i++)
    scanf("%d",&arr[i]);
    int t=1,k=0,l=0;
    int i=1,arr1[n];
    int p=0;
    int j=0,f=-1;
    while(f!=0) {
        arr1[j]=i;
        j++;
        i=arr[i];
        t++;
        for(int m=0;m<j;m++) {
            if(arr1[m]==i){
                l=t-1;
                p=j;
                f=1;
                break; } }
        if(f==1) {
            if(arr[p]==i)
            k=j-p;
            f=0; } }
    t=l;
    printf("%d %d",t,k);
    return 0; }