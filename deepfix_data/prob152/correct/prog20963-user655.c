#include <stdio.h>
int green(int a[],int i,int sum,int b,int n){
    if(sum==b){return 1 ;}
    if(i==n){return 0;}
    if(green(a,i+1,sum,b,n)||green(a,i+1,sum+a[i],b,n)){return 1;}
    else{return 0;} }
int main() {
    int n;
    int sum=0;
    scanf("%d",&n);
    int a[n];
    int i;
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        sum=sum+a[i]; }
    if((sum%2)==1){printf("NO");return 0;}
    int b=(sum/2);
    if(green(a,0,0,b,n)){printf("YES");}
    else{printf("NO");}
    return 0; }