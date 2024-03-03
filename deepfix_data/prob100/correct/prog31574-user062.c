#include<stdio.h>
#include<limits.h>
int main(){
int m,n,i,j,k[10000],l[1000],max,h,min=0;
scanf("%d %d/n",&n,&m);
for(i=0;i<m;i++){
    for(j=0;j<n;j++){
        scanf("%d",&k[j]);}
        for(h=0;h<n;h++){
            max=0;
            if (k[h] > k[max])
            {max = h;} } }
    for(i=0;i<m;i++) {
     l[i] = k[max];
     if (l[i]<l[min]){
         min=i; } }
     printf("%d",l[min]);
    return 0; }