#include <bits/stdc++.h>
using namespace std;

class Solution{

    public:
        string addBinary(string a, string b) {
            string ans = "";
            int carry = 0;
            int alen = a.length();
            int blen = b.length();
            int i = 0;

            while(i<alen or i<blen or carry!=0){
                int x = 0;
                if(i<alen && a[alen-i-1]=='1') x = 1;

                int y = 0;
                if(i<blen && b[blen-i-1]=='1') y = 1;

                ans = to_string((x+y+carry)%2) + ans;
                carry = (x+y+carry)/2;
                i++;
            }
            return ans;
        }

};

int main()
{
    Solution s1;

    string sol = s1.addBinary("1010","110101");

    cout<<"S: "<<sol<<endl;
    
    return EXIT_SUCCESS;
}