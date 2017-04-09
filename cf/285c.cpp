#include<iostream>
#include<bits/stdc++.h>
#define pb push_back
#define lli long long int
using namespace std;

struct line{
    int a;
    int b;
    int c;
    line( int aa, int bb, int cc) :a(aa), b(bb), c(cc) {}
};

lli p,q,r;
lli eval(lli x, lli y){
    return ((p*x) + (q*y) + r);
}
int main(){
    ios::sync_with_stdio(false);
    lli hx,hy,ux,uy,n;

    cin>>hx>>hy;
    cin>>ux>>uy;

    cin>>n;
    lli steps=0;
    for(int i=0;i<n;i++){
        cin>>p>>q>>r;
        //lines.pb(line(p,q,r));
        lli house =eval(hx,hy);
        lli uni = eval(ux,uy);
        if( (house>0 && uni<0) || ((house<0 && uni>0))){
            steps+=1;
        }
    }
    cout<<steps<<endl;
    return 0;
}
