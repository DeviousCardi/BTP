#include <stdio.h>
int green(int a[],int sum,int i,int n){
    if(i==(n+1)){return 0;}
    if(sum==7){return 1;}
    green(a,sum,i+1,n);
    green(a,sum+a[i],i+1,n); }
int main() {
    int n,m;
    scanf("%d%d",&n,&m);
    int a[n];
    int i;
    for(i=0;i<n;i++){
        scanf("%d",&a[i]); }
    if(green(a,0,0,n)==1){printf("YES");}
    else{printf("NO");}
    return 0; }