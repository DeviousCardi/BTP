#include <stdio.h>
int n;
int count(int a[],int j,int sum,int tempsum) {
    if(j>n-1)return 0;
    if(tempsum+a[j+1]==sum)return 1;
    else return count(a,j+1,sum,tempsum)||count(a,j+1,sum,tempsum+a[j+1]); }
int main() {
    int s;
    scanf("%d%d",&n,&s);
    int a[n];
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
        int k=count(a,-1,s,0);
        if(k==0)printf("NO");
        else printf("YES");
    return 0; }