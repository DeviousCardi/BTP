#include <stdio.h>
long s;
int n;
int check_sum(int t[],int size,int index,int sum){
    if(sum==s)
    return 1;
    else if(index==n&&sum!=s)
    return 0;
    else{
        return check_sum(t,size,index+1,sum+t[index]); } }
int main() {
    int i=0,k;
    scanf("%d %ld",&n,&s);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]); }
    int temp;
    for(i=0;i<n;i++){
        if(a[i]<a[i+1]){
            temp=a[i];
            a[i]=a[i+1];
            a[i+1]=temp; } }
    k=check_sum(a,n,0,0);
    if(k==1)
    printf("YES");
    else
    printf("NO");
    return 0; }