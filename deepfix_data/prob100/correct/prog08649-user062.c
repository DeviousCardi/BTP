#include<stdio.h>
#include<limits.h>
int main(){
int m,n,i,j,k[10000],l[1000],max,h;
scanf("%d %d",&n,&m);
for(i=0;i<m;i++){
    for(j=0;j<n;j++){
        scanf("%d",&k[i]);}
        for(h=0;h<n;h++){
            max=0;
            if (k[h] > k[max])
            {max = h;} }
     l[i] == k[max];
     int min=0;
     if (l[i]<l[min]){
         min=i; } }
     printf("%d",l[i]);
    return 0; }