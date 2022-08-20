#include<bits/stdc++.h>
using namespace std;
typedef vector<int>vi;
typedef long long ll;
#define F first
#define S second
#define PB push_back
#define MP make_pair

int main()
{
    //freopen('input.txt','r',stdin);//Use double_comma
    //freopen('output.txt','w',stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);

    unordered_map<int,int> m;
    vector<int> v;

    string s = "((()((((()()";
     stack<char> st;
            int count=0;
            if(s.size()==0){
                return 0;
            }
           for(int i=0;i<s.size();i++){
               if(s[i]=='('){
                   m.insert({i,count});
                   count++;
                   v.push_back(i);
                   st.push('(');
               }
               if(!st.empty()){
                   if(s[i]==')'){
                       count++;
                       v.pop_back();
                       st.pop();
                   }
               }
           }
        while(!st.empty()){
            st.pop();
            count--;
        }
        cout<<v[0];
        for(auto &x:m){
            cout<<x.first<<" "<<x.second<<endl;
        }

        // cout<< count;
    return 0;
}