#include <stdio.h>
int main(){
    int n,a[100],i,j,m=0;
    scanf("%d",&n);
    for(i=0;i<100;i++){
        scanf("%d",&a[i]); }
    for(i=0;i<n;i++){
        int count=0;
        for(j=i+1;j<n;j++){
            if(a[i]==a[j])
            count=count+1; }
        if(count==a[i]){
        m=1;
        continue;}
        else
        break; }
    if(m==1)
    printf("yes");
    else
    printf("no");
    return 0; }