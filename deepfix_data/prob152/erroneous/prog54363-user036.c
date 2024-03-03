#include <stdio.h>
    int suma=sum(0,size/2,array);
    int sumb=sum(size/2,size,array);
int sum(int start,int end,int array[]){
    int s=0;
    for(int i=start;i<end;i++)
        s=s+array[i];
    return s; }
int check(int array[],int index,int size){
    if(suma==sumb)return 1;
    return(array,index+1,size) }
int main() {
    int n;
    scanf("%d\n",&n);
    int a[n];
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    return 0; }