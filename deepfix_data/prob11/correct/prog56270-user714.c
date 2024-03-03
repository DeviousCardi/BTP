#include <stdio.h>
void calculate(int arr[],int n,int size,int key){
    int aux[n];
    int index[n];
    int i,j,k,sum,count=0,m,x;
    if(n==size+1){
        printf("No");
        return; }
    for(j=0;j<n;j++){
        for(i=0;i<n;i++){
            index[i]=j;
            for(k=0;k<n;k++){
                if(k==i)
                continue;
                index[k]=k; }
            for(m=0;m<n;m++)
                x=index[m];
                aux[m]=arr[x];
            sum=0;
            for(i=0;i<n;i++)
                sum=sum+aux[i];
            if(sum==key){
                printf("Yes");
                count++;
                return; } } }
    if(count==0)
        calculate(arr,n+1,size,key); }
int main() {
    int n,s,i;
    scanf("%d %d",&n,&s);
    int arr[n];
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    calculate(arr,2,n,s);
    return 0; }