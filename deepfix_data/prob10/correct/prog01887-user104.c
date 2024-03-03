#include<stdio.h>
int maximum(int a,int b){
    if(a==b)
    return a;
    else{
        if(a>b)
        return a;
        else
        return b; } }
int main() {
    int n,i,j,m;
    scanf("%d",&n);
    int arr[n],m_a_x[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]); }
    for(i=0;i<n;i++){
        for(j=i;j<n;j++){
            if(arr[j]>arr[i])
            m_a_x[i]++; } }
    m=m_a_x[0];
    for(i=0;i<n;i++){
        if(m_a_x[i]>m)
        m=m_a_x[i]; }
    printf("%d",m);
    return 0; }