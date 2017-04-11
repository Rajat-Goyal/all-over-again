#include<bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    int t; cin>>t;
    map<char,int>prio;
    prio['+']=1, prio['-']=2, prio['*']=3, prio['/']=4, prio['^']=5, prio['+']=6;

    while(t--){
        string exp;
        stack<char>st;
        cin>>exp;
        int len = exp.length();

        for(int i=0;i<len;i++){
            if( prio.find(exp[i])==prio.end() && exp[i]!='(' && exp[i]!=')' )cout<<exp[i];
            else if(exp[i]=='(') st.push(exp[i]);
            else if(exp[i]==')'){
                while( st.top()!='(' ){
                    cout<<st.top();
                    st.pop();
                }
                st.pop();
            }
            else if( (prio[exp[i]] >= prio[st.top()]) ||  ( st.top()=='(' ) ) st.push(exp[i]);
            else if( (prio[exp[i]] < prio[st.top()]) ){
                while( (prio[exp[i]] < prio[st.top()]) && ( st.top()!= '(' ) ){
                    cout<<st.top();
                    st.pop();
                }
                st.push(exp[i]);
            }
        }
        cout<<endl;
    }

    return 0;
}
