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
    int i=0,k,j;
    scanf("%d %ld",&n,&s);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]); }
    int temp;
    for(i=0;i<n;i++){
        for(j=i+1;j<n-1;j++){
            if(a[i]>a[j]){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp; } } }
    k=check_sum(a,n,0,0);
    if(k==1)
    printf("YES");
    else
    printf("NO");
    return 0; }