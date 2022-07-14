#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'encryption' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string encryption(string s) {
    string ans;
    int max,min;
    float a=sqrt(s.length());
    max =ceil(a);
    min = floor(a);
    int i=0,start=0;
    // max*min
   while(i<s.length() && start<max){
       ans.push_back(s[i]);
       i+=max;
       if(i>=s.length()){
           ans.push_back(' ');
           start++;
           i=start;
       }
   }
    
    cout<<ans;
    return ans;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = encryption(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
