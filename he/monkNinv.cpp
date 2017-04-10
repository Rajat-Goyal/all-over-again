#include<bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n][n];
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cin>>arr[i][j];
            }
        }
        int inv_cnt=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){

                for(int p=i;p<n;p++){
                    for(int q=j;q<n;q++){
                        if(arr[i][j]>arr[p][q]) inv_cnt+=1;
                    }
                }
            }
        }
        cout<<inv_cnt<<endl;
    }
    return 0;
}
