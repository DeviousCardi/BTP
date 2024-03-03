#include<stdio.h>
int len=1;
int main() {
    int n,i,j,sp=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    for(i=0;i<n;i++) {
        sp=i;
        longest(sp,arr); }
    printf("%d",len); }
void longest(int sp,int a[]) {
    int i,j,l=0,flag=-1;
    for(i=sp;i<n;i++) {
        for(j=i;j<n;j++) {
            if(a[j]>a[i]) {
                l++;
                if(l>len)
                    len=l;
                sp=j;
                flag=1;
                break; } }
        if(flag==1)
            break; } } }
    longest(sp,arr); }