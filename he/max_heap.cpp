#include <iostream>
#include<bits/stdc++.h>
#define pb push_back

using namespace std;

void max_heapify(vector<int>&arr, int pos, int len){
    int left = 2*pos;
    int right = 2*pos+1;
    int largest = pos;
    if(left<len && arr[left]>arr[largest]){
        largest = left;
    }
    if(right<len && arr[right]>arr[largest]){
        largest = right;
    }

    if(largest!=pos){
        swap(arr[largest], arr[pos]);
        max_heapify(arr,largest,len);
    }

}

void insert_val(vector<int>&arr, int val){
    arr.pb(val);
    int len = arr.size();
    for(int i=len-1; i!=0; i=i/2){
        if (arr[i] > arr[i/2]){
            swap(arr[i],arr[i/2]);
        }
        else{
            break;
        }
    }
}

void print_heap(vector<int>&arr){
    for (int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    ios::sync_with_stdio(false);
    int n, tmp, queries, len, typ;
    vector<int>arr;

    cin>>n; len=n;
    for(int i=0;i<n;i++){
        cin>>tmp;
        arr.pb(tmp);
    }
    for(int i=len/2;i>=0;i--){
        max_heapify(arr,i,len);
    }

    //print_heap(arr);

    cin>>queries;
    while(queries--){
        cin>>typ;
        if(typ == 1){
            cin>>tmp;
            insert_val(arr,tmp);
            //print_heap(arr);
        }
        else{
            cout<<arr[0]<<endl;
        }
    }
    return 0;
}
