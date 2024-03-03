#include <stdio.h>
#include <stdlib.h>
long *memarray[3];
long count=0;
long getways(int x, int m,int size,int arr[][size]) {
    int a[3];
    a[0]=x%arr[0],a[1]=x%arr[1],a[2]=x%arr[2];
    for(int i=2;i>=0;i--){
        if(a[i]==0)count++;
        else{
            for(int k=0;k>=i;k++){
                if(a[i]>=arr[k]){
                    if(a[i]%arr[k]==0)
                        count++;
                    else{ } } } } }
    return count; }
int main() {
    int n;
    scanf("%d",&n);
    int a[0]={1};
    int a[1]{1,3};
    int a[2]={1,3,5};
    long sum=0;
    for(int i=0;i<2;i++){
        getways(n,0,strlen(a[i]),a[i]); }
    printf("%ld",sum);
    return 0; }