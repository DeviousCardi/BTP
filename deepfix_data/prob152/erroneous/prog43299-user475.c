#include <stdio.h>
int equal(int a[],int start,int end,int mid) {
    int i,sum1=0,sum2=0;
    for(i=start;i<mid;i++)
        sum1+=a[i];
    for(i=mid;i<end;i++)
        sum2+=a[i];
    if(sum1==sum2 && start<=mid && end>=mid)
        return 1;
    else if(sum1!=sum && start<=mid && end>=mid)
        return ((a,start,mid++,end)||(a,start,mid--,end);
    else if(start>mid || end<mid)
        return 0; }
int main() {
    int num,i,mid,flag;
    scanf("%d\n",&num);
    int a[num];
    for(i=0;i<num;i++)
        scanf("%d\n",&a[i]);
    mid=num/2;
    flag=equal(a,0,num-1,mid);
    if(flag==0)
        printf("NO\n");
    else if(flag==1)
        printf("YES\n");
    return 0; }