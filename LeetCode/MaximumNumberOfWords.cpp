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

    vector<string> sentence={"Hello World","Harsh vardhan","alice and bob love leetcode"};
    cout<<sentence[1];
    int count=0,max=0;
    for(int i=0;i<sentence.size();i++){
        for(int j=0;j<sentence[i].size();j++){
            // cout<<sentence[i][j]<<endl;
            if(sentence[i][j] == ' '){
                count++;
            }
        }
        if(count>max){
            max = count;
        }
        count=0;
    }
    cout<<max+1;
    return 0;
}