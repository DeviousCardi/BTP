#include <stdio.h>
long sum(int start,int end,long array[]){
    int s=0;
    for(int i=start;i<end;i++)
        s=s+array[i];
    return s; }
int check(long array[],int index,int size,long suma1,long sumb1){
    if(index==size)return 0;
    if(suma1==sumb1)return 1;
    return check(array,index+1,size,suma1+array[index],sumb1-array[index]); }
int main() {
    int n;
    scanf("%d\n",&n);
    long a[n];
    for(int i=0;i<n;i++)
        scanf("%ld",&a[i]);
    long suma=a[0];
    long sumb=sum(1,n,a);
    int flag=check(a,0,n,suma,sumb);
    if(flag==1)
        printf("YES");
    else
        printf("NO");
    return 0; }