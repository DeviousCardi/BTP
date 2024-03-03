#include <stdio.h>
int check(int a[],int n,int s,int ts,int i) {
    int flag;
    ts=ts+a[i];
    if(i==n-1) {
        if(ts==s)
            return 1;
        else
            return 0; }
    if(ts==s)
        return 1;
    else if(ts<s)
        flag=check(a,n,s,ts,i+1);
    else if(ts>s)
        ts=ts-a[i];
        return check(a,n,s,ts,i+1);
    if(flag==1)
        return 1;
    else if(flag==0) {
        ts=ts-a[i];
        return check(a,n,s,ts,i+1); } }
int main() {
    int n,s,flag;
    scanf("%d",&n);
    scanf("%d",&s);
    int arr[n];
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    flag=check(arr,n,s,0,0);
    if(flag==0)
        printf("NO");
    else
        printf("YES");
    return 0; }