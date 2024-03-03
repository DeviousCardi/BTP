#include <stdio.h>
int main(){
    int n,t,k,j;
    int time=1;
    int check=t=k=0;
    scanf("%d",&n);
    int list[n];
    for(int i=0;i<n;i++) {
        scanf("%d ",&list[i]); }
    int traverse[n];
    traverse[0]=1;
    k=list[0];
    for(j=1;j<n;j++) {
        traverse[j]=k;
        k=list[traverse[j]-1];
        for(int m=j-1;m>=0;m--)
        {   time++;
            if(traverse[m]==traverse[j]) {
                check=1;
                t=time;
                k=(j-m); } }
        if(check==1)
        break; }
    printf("%d %d",t,k);
    return 0; }