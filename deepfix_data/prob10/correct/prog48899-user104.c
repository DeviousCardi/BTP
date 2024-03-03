#include<stdio.h>
int main() {
    int n,i,j,m,flag=0;
    scanf("%d",&n);
    int arr[n],m_a_x[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]); }
    for(i=0;i<n;i++){
        m_a_x[i]=1;
        for(j=i;j<n;j++){
            if(arr[j]>arr[i]){
            m_a_x[i]++;
            flag=m_a_x[i];} } }
    m=m_a_x[0];
    for(i=0;i<n;i++){
        if(m_a_x[i]>m)
        m=m_a_x[i]; }
    if(flag>0)
    printf("%d",m);
    else
    printf("%d",flag);
    return 0; }