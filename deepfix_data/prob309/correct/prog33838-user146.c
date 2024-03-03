#include <stdio.h>
int main(){
    int n,a[100],i,j,l,m;
    scanf("%d",&n);
    for(i=0;i<100;i++){
        if(i%2==0)
        scanf("%d",&a[i]); }
    l=2*n;
    for(i=0;i<l;i++){
        if(i%2==0){
        int count=0;
        for(j=0;j<l;j++){
            if(a[i]==a[j])
            count=count+1; }
        if(count==a[i]){
        m=1;
        continue; }
        else{
        m=0;
        break; } }
    else continue; }
    if(m==1)
    printf("yes");
    else if(m==0)
    printf("No");
    return 0; }