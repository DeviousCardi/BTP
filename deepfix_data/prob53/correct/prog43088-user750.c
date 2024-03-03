# include<stdio.h>
double diff_recur(double t[],int size,int count){
    static double c=0;
    if(count==size){
        return c; }
    if(count==0){
        c=t[count];
        return diff_recur(t,size,count+1); }
    else{
        c=c-t[count];
        return diff_recur(t,size,count+1); } }
int main(){
    int n;
    scanf("%d\n",&n);
    double arr[n];
    for(int i=0;i<n;i++){
        scanf("%f",&arr[i]); }
    double r=diff_recur(arr,n,0);
    printf("%.0f",r);
    return 0; }