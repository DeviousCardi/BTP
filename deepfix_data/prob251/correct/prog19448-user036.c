#include <stdio.h>
#include <stdlib.h>
long *memarray[3];
long count=0;
long getways(int x, int m,int arr[]) {
    int a[3];
    a[0]=x%arr[0],a[1]=x%arr[1],a[2]=x%arr[2];
    for(int i=2;i>=0;i--){
        if(a[i]==0)count++;
        else{
            for(int k=0;k<=i;k++){
                if((a[i]>=a[k])&&(a[i]%a[k]==0)){
                    count++; } } } }
    return count; }
int main() {
    int n;
    scanf("%d",&n);
    int a[]={1,3,5};
    long sum=getways(n,0,a);
    printf("%ld",sum);
    return 0; }