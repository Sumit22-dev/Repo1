#mountain peak
#include<iostream>
using namespace std;
int peakIndex(int arr[],int size){
    int start=0;
    int end=size-1;
    int mid=start+(end-start)/2;
    while(start<end){
        if(arr[mid]<arr[mid+1]){
            start=mid+1;
        }
        else {end=mid;
        }
        mid=start+(end-start)/2;

    }
    return start;

}
int main(){
    int arr[5]={0,2,1,7,0};
    cout<<"peak index is "<<peakIndex(arr,5)<<endl;
    return 0;
}
