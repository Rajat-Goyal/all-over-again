
#include<bits/stdc++.h>
#define pair<int,int> pii

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    int n;
    cin>>n;
    int arr[101]={0};
    int flag=0;
    for(int i=1;i<=n;i++){
        cin>>arr[i];
        if(arr[i]!=0)flag=1;
    }
    if(flag==0){
        cout<<"NO"<<endl;
        return 0;
    }
    vector<int>start;
    vector<int>last;
    for(int i=1;i<=n;){
        int left=i, right=i;
        start.push_back(left);
        if(arr[left]!=0){
            while(arr[right+1]==0 && right!=n){
                right+=1;
            }
        }
        else{
            while(arr[right+1]==0 && right!=n){
                right+=1;
            }
            right+=1;
            while(arr[right+1]==0 && right!=n){
                right+=1;
            }
        }
        last.push_back(right);
        i = right+1;
    }
    //cout<<"Hello World"<<endl;
    int k = start.size();
    cout<<"YES"<<endl;
    cout<<k<<endl;
    for(int i=0;i<k;i++){
        cout<<start[i]<<" "<<last[i]<<endl;
    }

    return 0;
}
