#include<iostream>
using namespace std; 

// int linearSearch(int arr[],int n,int key){
//     for(int i=0;i<n;i++){
//         if(arr[i]==key){
//             return arr[i];
//         }
//     }
//     return -1;

// }

// int BinarySearch(int arr[],int n,int key){
//      int start=0;
//      int end=n;

//      while(start<=end){
//         int mid=start+end/2;

//         if(arr[mid]==key){
//             cout<<"required element is : ";
//             return arr[mid];
//         }
//         if(arr[mid]>key){
//             end=mid-1;
//         }
//         if(arr[mid]<key){
//             start=mid+1;
//         }
//      }
//      return -1;
//}
int main(){
     cout<<"enter the no.of keys : ";
     int n;cin>>n;
     int key;
     int arr[n];
     cout<<"enter the elements: ";
     for(int i=0;i<n;i++){
        cin>>arr[i];
     }
     for(int i=0;i<n;i++){
        cout<<arr[i]<<"\t";
     }

     cout<<"\n enter the element you want to search : ";
     cin>>key;

     //cout<<linearSearch(arr,n,key);
     //cout<<BinarySearch(arr,n,key);

     
     return 0;
}