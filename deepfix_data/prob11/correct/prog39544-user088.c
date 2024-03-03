#include <stdio.h>
int check(int a[],int index,int end,int sum,int final) {
    if(final==sum)
    return 1;
    else if((index==end)&&sum!=final)
    return 0;
    else return check(a,index+1,end,sum+a[index],final)||check(a,index+1,end,sum,final); }
int main() {
    int n,s,i,arr[30];
    scanf("%d %d",&n,&s);
    for(i=0;i<n;i++) {
        scanf("%d",&arr[i]); }
    if(check(arr,0,n-1,0,s)!=0)
    printf("YES");
    else
    printf("NO");
    return 0; }