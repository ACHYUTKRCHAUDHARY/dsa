//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

string merge (string s1, string s2);

int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s1; cin >> s1;
        string s2; cin >> s2;

        cout << merge (s1, s2) << endl;
    }
}

// Contributed By: Pranay Bansal

// } Driver Code Ends



string merge (string s1, string s2)
{
    // your code here
    int n=s1.size(),m=s2.size(),i = 0;
    string ans;
    while(i<n && i<m){
        ans+=s1[i];
        ans+=s2[i];
        i++;
    }
    while(i<n){
       ans+=s1[i];
       i++;
    }
    while(i<m){
        ans+=s2[i];
        i++;
    }
    return ans;
}