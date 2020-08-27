#include <bits/stdc++.h>
using namespace std;
int lengthOfLongestSubstring(string s) {
        int length=0,maxlength=0;
        string l="";
        for(int i=0;i<s.length();i++)
        {
            int pos=l.find(s[i]);
            if(pos==-1)
            {
                l=l+s[i];
                length++;
            }
            else
            {
                l=l.substr(pos+1);
                length=l.length();
            }
            if(maxlength<length) maxlength=length;

        }
        return maxlength;

    }

int main()
{
    cout<<lengthOfLongestSubstring("abcabcbb");

    return 0;
}
