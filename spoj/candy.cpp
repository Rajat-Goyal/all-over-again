#include<bits/stdc++.h>
#define vi vector<int>
#define pb push_back
#define lli long long int
#define ull unsigned long long int

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    int n;
    cin>>n;
    while(n!=-1){
        vi bags(n,0);
        int tot = 0, avg = 0, flag = 0;
        for(int i=0; i<n; i++){
            cin>>bags[i];
            tot+=bags[i];
        }
        avg = tot/n;

        if( avg != ((tot*1.0)/n) ){
            cout<<-1<<endl;
            flag = 1;
        }
        if(flag==0){
            int moves=0;
            sort(bags.begin(), bags.end());
            reverse(bags.begin(), bags.end());

            for(int i=0; i<n; i++){
                if(bags[i]>avg){
                    moves += (bags[i]-avg);
                }
            }
            cout<<moves<<endl;
        }
        cin>>n;
    }
    return 0;
}
