#include <stdio.h>
int main(){
    int n;
    int i,j;
    int a[100];
    int room[2000];
    int t=0;
    int k=0;
    int oc1=0,oc2=0,oc3=0;
    int p;
    int count=0;
    int var;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d ",&a[i]); }
    room[0]=1;
    for(i=0,j=1;j<100;j++){
        room[j]=a[i];
        i=room[j]-1; }
    for(i=0;i<n;i++){
        var=a[i];
        for(j=0;j<1500;j++){
            if(room[j]==var){
                count++;
                p=j; }
            if(count==1){
                oc1=p; }
            else if(count==2){
                oc2=p; } }
        if(oc2-oc1+1>t){
            t=oc2-oc1+1; }
        if(oc2-oc1>k){
            k=oc2-oc1; } }
    printf("%d %d",t,k);
    return 0; }