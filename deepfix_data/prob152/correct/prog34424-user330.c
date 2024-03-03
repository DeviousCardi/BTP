#include <stdio.h>
int f(int a[],int sum,int c,int count,int n){
    if(sum==c/2)return 1;
    if(count>=n||sum>c/2)return 0;
    else{
        sum+=a[count];
        return f(a,sum,c,count+1,n)||f(a,sum-a[count],c,count+1,n); } }
int main() {
    int n,c=0,i,j;
    scanf("%d",&n);
    int a[30];
    for(i=0;i<=n-1;i++){
        scanf("%d",&a[i]);
        c+=a[i]; }
    if(c%2!=0){
        printf("NO");
        return 0; }
        j=f(a,0,c,0,n);
    if(j==1)printf("YES");
    else printf("NO");
    return 0; }