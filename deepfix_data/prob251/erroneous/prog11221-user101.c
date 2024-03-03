#include <stdio.h>
#include <stdlib.h>
long *memarray[3];
long getways(int x, int m) {
    int i,j,k;
    long ans;
    if (m==1){
        return x; }
    else if(m==2){
        if(x<3)
            return 0;
        else{
         return x/3; }
    else{
        for(i=0;i<n);i++){
            for(j=0;j<n;j++){
                for(k=0;k<n;k++){
                    if((i+3*j+5*k)==x){
                        ans=ans+1;
                        (int)(*memarray[0]+ans*sizeof(int))=i;
                        (int)(*memarray[1]+ans*sizeof(int))=j;
                        (int)(*memarray[2]+ans*sizeof(int))=k; } } } }
        return ans; } }
    return getways(x,1)+getways(x,2)+getways(x,3); }
int main() {
    int n;
    long a;
    scanf("%d",&n);
    a=getways(n,3);
    printf("%l",a);
    return 0; }