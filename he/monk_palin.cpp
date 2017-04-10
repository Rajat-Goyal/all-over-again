#include<bit/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    int t,flag;
    cin>>t;
    while(t--){
        string str;
        flag=0;
        int len = str.length();
        int lptr = 0,rptr=len-1;
        while(lptr<rptr){
            if(str[lptr]!=str[rptr]){
                cout<<"NO"<<endl;
                flag =1;
                break;
            }
            lptr+=1;
            rptr-=1;
        }
        if(flag!=1){
            if(len%2==0)cout<<"YES EVEN"<<endl;
            else cout<<"YES ODD"<<endl;
        }
    }
    return 0;
}
