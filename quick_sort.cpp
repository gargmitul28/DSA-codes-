#include<bits/stdc++.h>
using namespace std;

void swap(int *x,int *y){
  int temp=*x;
  *x=*y;
  *y=temp;
}

int partition(int arr[],int low,int high){
    int pivot=arr[low];
   int start=low;
   int end=high;
   
   while(start<end){
   while(arr[start]<=pivot){
     start++;
   }
   while(arr[end]>pivot){
     end--;
   }
   if(start<end){
     swap(&arr[start],&arr[end]);
   }
   }
   swap(&arr[low],&arr[end]);
   return end;

}

void quickSort(int arr[],int low,int high){
  if(low<high){
    int mid=partition(arr,low,high);
    quickSort(arr,low,mid-1);
    quickSort(arr,mid+1,high);
  }
  return ;
}

void printArray(int arr[], int size) 
{ 
    int i; 
    for (i = 0; i < size; i++) 
        cout << arr[i] << " "; 
    cout << endl; 
} 
int main(){
  int arr[] = {10, 7, 8, 9, 1, 5}; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    quickSort(arr, 0, n - 1); 
    cout << "Sorted array: \n"; 
    printArray(arr, n); 
    return 0; 
}
