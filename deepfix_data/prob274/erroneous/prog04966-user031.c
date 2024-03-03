#include <stdio.h>
int main(){
    int room[1000],array[1000,copy[1000],i,j,k,l,m=1,n,t,a=0,b=0,diff,flag=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d ",&room[i]);
    for(j=0;j<1000;j++){
        if(j==0){
            array[j]=1;
            continue; }
        array[j]=room[m-1];
        m=room[m-1]; }
    for(i=0;i<1000;i++){
        for(j=0;j<1000;j++){
            copy[i]=array[i];
            if(array[i]==copy[j]&&i!=j){
                a=j;
                b=i;
                t=i;
                k=b-a;
                flag=1;
                break; } }
        if(flag==1)
        break; }
    printf("%d %d",t,k);
    return 0; }