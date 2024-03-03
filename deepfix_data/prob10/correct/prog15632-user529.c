#include<stdio.h>
int len=1,n,arr[20];
void longest(int, int []);
int main() {
    int i,sp=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
        sp=0;
        longest(sp,arr);
    printf("%d",len); }
void longest(int sp,int a[]) {
    int i,j,flag=-1;
    static int l=0;
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
            break; }
    longest(sp,arr); }