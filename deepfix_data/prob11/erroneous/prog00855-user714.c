#include <stdio.h>
void calculate(int arr[],int index,int n,int key){
   int sum=0,i;
   int size=n;
   if(size==1){
       printf("NO");
       return; }
   for(i=0;i<size;i++){
        if(i==index)
            continue;
        sum=sum+arr[i]; }
    int sum1=0;
    for(i=0;i<size;i++){
        sum1=sum1+arr[i]; }
    if(sum==key||sum1==key){
        printf("YES")
        return; }
    else calculate(arr[],index+1,size,key); }
int main() {
    int n,s,i;
    scanf("%d %d",&n,&s);
    int arr[n];
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    calculate(arr,n,s);
    return 0; }