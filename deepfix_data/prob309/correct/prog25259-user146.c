#include <stdio.h>
int num(int n);
int main(){
    int i,x,n,a[i];
     scanf("%d\n",&n);
    for(i=0;i<n;i++){
        x=num(a[i]);
        if(x==0)
        printf("yes");
        else if(x==1)
        printf("no"); }
     return 0; }
    int num(n){
    int a[n],i;
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        if(num(a[i])==a[i])
        return 0;
        else
        return 1; } }