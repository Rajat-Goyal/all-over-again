#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    int a,b,c;
    cin>>a>>b>>c;
    while(a!=0 || b!=0 || c!=0){
        int ap1 = b-a;
        int ap2 = c-b;

        double gp1 = (b*1.0)/a;
        double gp2 = (c*1.0)/b;

        if(ap1 == ap2){
            cout<<"AP "<<(c+ap1)<<endl;
        }
        else{
            cout<<"GP "<<(c*gp1)<<endl;
        }
        cin>>a>>b>>c;
    }
    return 0;
}
