#include <stdio.h>
#include <stdlib.h>
long *memarray[3];
long getways(int x, int m)
{   int n=x;
    int i,j,k;
    long ans;
    if (m==1){
        printf("yes");
        return x; }
    else if(m==2){
        printf("yeah");
        if(x<3)
            return 0;
        else{
         return x/3; } }
    else if(m==3){
        printf("f");
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                for(k=0;k<n;k++){
                    if((i+3*j+5*k)==x){
                        ans=ans+1; } } } }
        return ans; }
    return getways(x,1)+getways(x,2)+getways(x,3); }
int main() {
    int n;
    long a;
    scanf("%d",&n);
    a=getways(n,3);
    printf("%l",a);
    return 0; }