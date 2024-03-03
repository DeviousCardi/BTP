#include <stdio.h>
int main(){
    int n,i,j,temp,flag=0;
    int min=200;
    scanf("%d /n",&n);
    int a[2*n];
    for(i=0;i<2*n;i++) {
        scanf("%d",&a[i]); }
    for(i=0;i<(2*n)-1;i++) {
        for(j=i+1;j<2*n;j++) {
            if(a[i]==a[j])
            {   flag=1;
                temp=j-i; } }
        if(temp<min)
            min=temp; }
    if(flag==1)
        printf("%d",min);
    return 0; }