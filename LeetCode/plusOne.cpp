// class Solution {
// public:
//   vector<int> plusOne(vector<int>& d) {
//         int n = d.size()-1;
//         if (d[n] != 9){
//             d[n]++;
//         }else{
//             while (n >= 0 && d[n] == 9) {
//                 d[n] = 0;
//                 n--;
//             }
//              if (n < 0)
//                  d.insert(d.begin(),1);
//            else  d[n]++;
//         }
//         return d;
//     }
// };
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

    string s="Hello";
    string s2 ="ld";

    int index  = s.find(s2);
    cout<<index<<endl;
    return 0;
}