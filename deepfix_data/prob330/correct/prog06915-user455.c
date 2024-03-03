#include <stdio.h>
int main(){
    int n,i,s=0;
    scanf("%d\n",&n);
    int num[n];
    for(i=0;i<n;i++) {
        scanf("%d",&num[i]);
        printf("%d\n", num[i]); }
    for(i=0;i<n;i++) {
        if(i==0)
        continue;
        else if(i==n-1)
         break;
        else if(i!=0||i!=n-1) {
            if((num[i]>=num[i-1])&&(num[i]>=num[i+1]))
            s=s+1;
            else
            continue; } }
    printf("%d",s);
    return 0; }