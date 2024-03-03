#include <stdio.h>
int sum;
int checksum(int arr[],int flag,int size,int sum,int sum1){
    if (sum1==sum){return 1;}
    else if(flag==size){return 0;}
    return checksum(arr,flag+1,size,sum,sum1+arr[flag])||checksum(arr,flag+1,size,sum,sum1); }
int main() {
    int a,b,c;
    scanf("%d %d",&a,&b);
    int array[a];
    for(int i=0;i<a;i++){
        scanf("%d",array[i]); }
    c=checksum(array,0,a,b,0);
    if(c==0){printf("NO");}
    else{printf("YES");}
    return 0; }