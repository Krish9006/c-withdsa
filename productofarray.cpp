#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of elements in the array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans=1
    for(int i=0;i<n;i++){
        if(arr[i]==0)ans*=1;
        ans*=arr[i];
    }
    else{
        ans*=arr[i];
    }
    cout<<ans;
    return 0;
        

}
