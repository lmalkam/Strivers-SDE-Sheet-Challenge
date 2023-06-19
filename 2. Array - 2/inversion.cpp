#include <bits/stdc++.h> 


long long merge(long long *arr,long long temp[],int left,int mid,int right)
{
    int count=0;
    int i=left,j=mid,k=left;
    while((i<=mid-1) and (j<=right))
    {
        if(arr[i]<arr[j])
        {
            temp[k++]=arr[i++];
        }
        else
        {
            temp[k++]=arr[j++];
            count=count+(mid-i);
        }
    }

    while (i <= mid - 1) {
        temp[k++]=arr[i++];
    }

    while(j<=right)
    {
        temp[k++]=arr[j++];
    }

    for(int i=left;i<=right;i++){
        arr[i]=temp[i];
    }

    return count;
}
long long merge_sort(long long *arr,long long temp[],int left,int right)
{
    int mid,count=0;
    if(left<right)
    {
        mid=(left+right)/2;
        count+=merge_sort(arr,temp,left,mid);
        count+=merge_sort(arr,temp,mid+1,right);
        count+=merge(arr,temp,left,mid+1,right);
    }

    return count;
}
long long getInversions(long long *arr, int n){
    // Write your code here.

    long long temp[n];

    int left=0,right=n-1;

    merge_sort(arr,temp,left,right);
}