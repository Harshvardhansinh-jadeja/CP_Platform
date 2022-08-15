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

    string t="";
    string s  = "987 words from ";
    for(int i=0;i<s.size();i++){
        if(s[i] =='-'){
                t.push_back(s[i]);
        }
        if(s[i]>'A' && s[i]<'Z' || s[i]>'a' && s[i]<'z'){
            return 0;
        }
        if(s[i]>= 48 && s[i] <=57 ){
            t.push_back(s[i]);
            if(s[i+1]==' '){
                break;
            }
        }
    }
    int x=0;
    if(stoi(t)>INT32_MAX){
       x= INT32_MAX;
    }
    if(stoi(t)<INT32_MIN){

        x= INT32_MIN;
    }else{

     x =stoi(t);
    }
    cout<<x<<endl;
    return 0;
}