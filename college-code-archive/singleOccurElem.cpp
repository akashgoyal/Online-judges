/*
 There is an array in which every element is present twice except for the one element. Find that element
 Example:
 input : 12 67 89 67 12 89 11
 output : 11
 Reason : 11 is present only one time in the array. All other elements are present twice
 */

#include<iostream>
 int main(){
     int size;
     std::cout<<"Input the size of array\n";
     std::cin >> size;
     int arr[size];
     std::cout<<"\nEnter the array in which \nevery element is present twice \nexcept for the one element\n";
     for(int i=0; i<size; i++) std::cin>>arr[i];
     int ans=arr[0];
     for(int i=1; i<size; i++) ans^=arr[i];
     std::cout<<"\nNumber with single occurrence :: "<<ans;

 return 0;
 }
