#include<stdio.h>
int main() {
    int n,i,j,a[21],maxtill[21],temp;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",a+i); }
    for(i=0;i<n;i++)
        maxtill[i]=1;
    for(i=1;i<n;i++){
        for(j=0;j<i;j++){
            if(a[i]>a[j]){
                temp=maxtill[j]+1;
                if(temp>maxtill[i])
                    maxtill[i]=temp; } } }
    temp=maxtill[0];
    for(i=1;i<n;i++)
        if(maxtill[i]>temp)
                temp=maxtill[i];
    printf("%d",temp);
    return 0; }