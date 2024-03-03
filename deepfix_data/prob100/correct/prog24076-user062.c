#include<stdio.h>
#include<limits.h>
int main(){
int m,n,i,j,k[10000],l[1000],max=0,h,min=0;
scanf("%d %d/n",&n,&m);
for(i=0;i<m;i++){
    for(j=0;j<n;j++){
        scanf("%d",&k[j]);}
        for(h=0;h<n;h++){
            if (k[h] >= k[max])
            {max = h;}
        }l[i] = k[max]; }
    for(i=0;i<m;i++) {
     if (l[i]<l[min]){
         min = i; } }
     printf("%d",l[min]);
    return 0; }