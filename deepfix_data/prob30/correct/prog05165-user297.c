#include <stdio.h>
int arr[100]={0};
int n;
int getMaxLessThan(int upperLimit) { }
int main()
{  int n,k,max,index,j,temp;
    scanf("%d %d",&n,&arr[j]);
    int i=0;
    for(i=0;i<k;i++) {
        max=arr[i];
        index=i;
        for(j=i+1;j<n;j++) {
        if(arr[j]>max)
        { max=arr[j];
            index=j; }
    } temp=arr[i];
    arr[i]=arr[index];
    arr[index]=temp;
     printf("%d\n",max); }
    return 0; }