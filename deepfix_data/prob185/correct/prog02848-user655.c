#include <stdio.h>
int green(int a[],int sum,int i,int n,int m){
    if(sum==m){return 1;}
    if(i==(n)){return 0;}
 if(   green(a,sum,i+1,n,m)||
    green(a,sum+a[i],i+1,n,m)){return 1;}
    else{return 0;} }
int main() {
    int n,m;
    scanf("%d%d",&n,&m);
    int a[n];
    int i;
    for(i=0;i<n;i++){
        scanf("%d",&a[i]); }
    if(green(a,0,0,n,m)==1){printf("YES");}
    else{printf("NO");}
    return 0; }