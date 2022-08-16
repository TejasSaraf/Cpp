// Dutch National Flag Algorithm
#include<iostream>
using namespace std;

void sort(int arr[],int n)
{
    int low=0;
    int mid=0;
    int high=n-1;
    while(mid<=high){
        switch(arr[mid])
        {
            case 0:
            swap(arr[low++],arr[mid++]);
            break;
            case 1:
            mid++;
            break;
            case 2:
            swap(arr[mid],arr[high--]);
            break;
        }
    }
}

int main()
{
    int n,i;
    cout<<"Enter size of array:"<<endl;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++){
    cout<<"Enter Array Elements:"<<endl;
    cin>>arr[i];
    }
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }
    sort(arr,n);
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;

}
