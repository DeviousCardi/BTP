#include<limits.h>
#include <stdio.h>
int main(){
    int x[1000],b[1000],i;
    int n;
    scanf("%d",&n);
    for(i=0;i<2*n;i++) {
        scanf("%d",&x[i]); }
    int temp=INT_MAX,j,count;
    for(i=0;i<n;i++)
    {count=0;
        for(j=0;j<2*n;j++) {
            if(x[i]==x[j])
            {count=j-i;
                break; } }
        b[i]=count;
    }temp=b[0];
    for(i=0;i<n;i++) {
        if(b[i]<temp) {
            temp=b[i]; } }
    printf("%d",temp);
    return 0; }