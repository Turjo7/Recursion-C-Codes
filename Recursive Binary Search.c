#include<stdio.h>

int a[10];
int bsearch(int a[],int low,int high,int n,int key);

int main()
{
    int i,j,n,temp,flag,key;
    printf("How Many Numbers\n");
    scanf("%d",&n);
    printf("Enter Array\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter A Key To Search\n");
    scanf("%d",&key);
    for(i=0;i<n-1;i++){
        for(j=0;j<n-1-i;j++){
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("The Array After Sorting\n");
    for(i=0;i<n;i++){
        printf("%d\n",a[i]);
    }
    flag=bsearch(a,0,n-1,n,key);
    if(flag==-1){
        printf("Not Found\n");
    }
    else{
        printf("Got The Key\n");
    }
    return 0;
}
int bsearch(int a[],int low,int high,int n,int key)
{
    int mid;
    if(low>high){
        return -1;
    }
    mid=((low+high)/2);
    if(a[mid]==key){
        return mid;
    }
    else{
        if(a[mid>key]){
            return bsearch(a,low,mid-1,n,key);
        }
        else{
            return bsearch(a,mid+1,high,n,key);
        }
    }
    return 0;
}

