#include <stdio.h>
int main(){
    int m,n,i,count=0;
    scanf("%d %d",&m,&n);
    for(i=2;i<n;i++){
        if(n%i==0)
        count++;
        else
        continue; }
    if(count==m)
        printf("YES");
    else
        printf("NO");
    return 0; }