#include <stdio.h>
int arr[100];
int n;
int getMaxLessThan(int max)
{   int j,x;
    x=0;
    for(j=0;j<n;j++){
        if(arr[j]<max&&arr[j]>x){
            x=arr[j]; } }
    return x; }
int main()
{   int i,k,b;
    scanf("%d%d\n",&n,&k);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]); }
    int max=0;
    for(i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i]; } }
    int p[k];
    p[0]=max;
    for(i=1;i<k;i++){
        b= getMaxLessThan(max);
        p[i]=b;
        max=b; }
    for(i=0;i<k;i++){
        printf("%d\n",p[i]); }
    return 0; }