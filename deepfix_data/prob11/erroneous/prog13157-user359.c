#include <stdio.h>
long s;
int n;
int check_sum(int t[],int size,int index,int sum){
    if(index==n)
    return sum==s;
    else{
        return check_sum(t,size,index+1,sum+t[index]); } }
int main() {
    int i,k;
    scanf("%d %ld",&n,&ld);
    int a[i];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]); }
    k=check_sum(a,n,0,0);
    if(k==1)
    printf("YES");
    else
    printf("NO");
    return 0; }