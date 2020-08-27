
#include <bits/stdc++.h>

using namespace std;

double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int s1=nums1.size();
        int s2=nums2.size();
        int i1=0,i2=0;
        vector<int> merge;
        for(int i=0;i<s1+s2;i++)
        {
            if(i1<s1 && i2<s2)
            {
                if(nums1[i1]<nums2[i2])
                {
                    merge.push_back(nums1[i1]);
                    i1++;
                }
                else
                {
                    merge.push_back(nums2[i2]);
                    i2++;
                }
            }
            else
            {
                if(i1==s1)
                {
                     while(i2!=s2)
                     {
                         merge.push_back(nums2[i2]);
                        i2++;
                     }
                }
                else
                {
                    while(i1!=s1)
                    {
                        merge.push_back(nums1[i1]);
                        i1++;
                    }
                }
                break;
            }
        }
        double median;
        if((s1+s2)%2==0)
        {
            int a=(s1+s2)/2;
            median= (double)(merge[a]+merge[a-1])/2;
        }
        else
        {
            int mid=(s1+s2)/2;
            median=merge[mid];
        }
        return median;
    }
int main()
{
    vector<int> a;
    a.push_back(1);
    a.push_back(2);
    vector<int> b;
    b.push_back(3);
    b.push_back(4);
    cout<<findMedianSortedArrays(a,b);

    return 0;
}
