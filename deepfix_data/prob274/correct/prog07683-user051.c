#include <stdio.h>
int main(){
    int n,room_no[100],i,t,j,arr[100],count=0,temp;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&room_no[i]);
    arr[0]=1;
    arr[1]=room_no[1];
    for(i=1;i<2*n;i++) {
        temp=room_no[(i-1)%n];
        arr[i+1]=room_no[temp]; }
    t=1;
    for(j=1;;j++) {
        for(i=j+1,t=0;;j++) {
            if(arr[i]==arr[j])
                break;
            t=t+1; }
        printf("%d ",t);
        j=i;
        count=count+1;
        if(count==2)
            break; }
    return 0; }