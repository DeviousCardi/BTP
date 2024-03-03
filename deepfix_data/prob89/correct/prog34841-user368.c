 #include <stdio.h>
int main(){
    int lucky,n,num;
    int arr[101];
    scanf("%d\n%d",&lucky,&n);
    for(int i=0;i<n;i++){
        scanf("%d ",&num);
        arr[i]=num; }
    for(int count=0;count<n;count++){
        for(int j=count;j<n;j++){
            if(arr[count]+arr[j]==lucky){printf("lucky");break;}
            else if(count==n-1){printf("unlucky");} } }
    return 0; }