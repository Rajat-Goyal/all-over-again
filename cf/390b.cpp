#include<bits/stdc++.h>
#include<iostream>

using namespace std;

string mat[4];
int check_x(int x, int y, char tmp){
    char up,d,l,r,upr,upl,dr,dl;
    if(x+1<4 && x-1>=0){
        up = mat[x-1][y]; d=mat[x+1][y];
        if((up==tmp && d=='.') || (up=='.' && d==tmp))return 1;
    }
    if(y+1<4 && y>=0){
        l=mat[x][y-1], r= mat[x][y+1];
        if((l==tmp && r=='.') || (l=='.' && r==tmp))return 1;
    }
    if((x+1<4 && x-1>=0 && y+1<4 && y>=0)){
        dl=mat[x+1][y-1], upr= mat[x-1][y+1];
        upl = mat[x-1][y-1]; dr=mat[x+1][y+1];
        if((upl == tmp && dr =='.') || (upl == '.' && dr== tmp) || (upr ==tmp && dl =='.') || (upr == '.' && dl == tmp) )return 1;
    }
    return 0;
}

int check_dot(int x, int y, char tmp){
    char up,d,l,r,upr,upl,dr,dl;
    if(x+1<4 && x-1>=0){
        up = mat[x-1][y]; d=mat[x+1][y];
        if((up==tmp && d==tmp))return 1;
    }
    if(y+1<4 && y>=0){
        l=mat[x][y-1], r= mat[x][y+1];
        if((l==tmp && r==tmp) )return 1;
    }
    if((x+1<4 && x-1>=0 && y+1<4 && y>=0)){
        dl=mat[x+1][y-1], upr= mat[x-1][y+1];
        upl = mat[x-1][y-1]; dr=mat[x+1][y+1];
        if((upl == tmp && dr ==tmp) ||  (upr == tmp && dl == tmp))return 1;
    }
    return 0;
}

int main(){
    ios::sync_with_stdio(false);
    for(int i=0;i<4;i++){
        cin>>mat[i];
    }

    int cnt1=0,cnt2=0;
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            if(mat[i][j]=='x')cnt1+=1;
            else if(mat[i][j]=='o')cnt2+=1;
        }
    }
    char tmp;
    if(cnt1>cnt2)tmp = 'o';
    else tmp = 'x';

    int ans;
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            ans =0;
            if(mat[i][j]=='x'){
                ans=check_x(i,j,tmp);
            }
            else if(mat[i][j]=='.'){
                ans = check_dot(i,j,tmp);
            }
            if(ans==1){
                cout<<"YES"<<endl;
                return 0;
            }
        }
    }
    cout<<"NO"<<endl;
    return 0;

}
