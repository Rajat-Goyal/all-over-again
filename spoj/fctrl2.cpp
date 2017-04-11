#include<bits/stdc++.h>
#define pb push_back
#define vi vector<ull>
#define pf push_front
#define lli long long int
#define ull unsigned long long int
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    vector<ull>::iterator it;
    vector<ull>::reverse_iterator itr;

    int t,n;
    cin>>t;
    unsigned long long int carry,tmp;
    while(t--){
        cin>>n;
        vi num;
        num.pb(1LL);
        carry = 0LL, tmp =0LL;
        for(int i=2; i<=n ;i++){
            for(it= num.begin(); it!=num.end(); it++){
                tmp = ((*it) * i)+carry;
                *it = tmp%10;
                carry = tmp/10;
            }
            if(carry!=0){
                while(carry>9){
                    num.pb(carry%10);
                    carry = carry/10;
                }
                num.pb(carry);
                carry =0LL;
            }
        }
        for(int i=num.size()-1; i>=0; i--){
            cout<<num[i];
        }
        cout<<endl;
    }

    return 0;
}
