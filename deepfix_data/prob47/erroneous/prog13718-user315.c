#include<stdio.h>
#include<stdlib.h>
int catalan(int n){
    int arr[15],sum[15];
    arr[0]=1;sum[0]=0;
    int i;
    for(i=1;i<15;i++){
        arr[i]=(((4*i)-2)/(i+1))*arr[i-1];
        sum[i]=sum[i-1]+arr[i]; }
    return sum[n]; }
int main(){
    int t,j,a[15];
    scanf("%d",&t);
    for(j=0;j<t;j++){
        scanf("%d\n",&a[j])
        printf("%d\n",catalan(a[j])); }
    return 0; }