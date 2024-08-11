//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Function to search x in arr
    // arr: input array
    // X: element to be searched for
    int search1(vector<int>& arr, int x,int index, int n){
        if(index == n)
        return -1;
        
        if(arr[index] == x){
            return index;
        }
        else 
        return search1(arr,x,index+1,n);
    }
    int search(vector<int>& arr, int x) {

        // Your code here
       return search1(arr,x,0,arr.size());
    }
};

//{ Driver Code Starts.

int main() {
    int testcases;
    cin >> testcases;
    cin.ignore(); // To ignore the newline character after reading testcases
    while (testcases--) {
        vector<int> arr;
        int x;
        string input;

        getline(cin, input); // Read the entire line for the array elements
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        getline(cin, input); // Read the next line for x
        stringstream ss2(input);
        ss2 >> x;

        Solution ob;
        cout << ob.search(arr, x) << endl; // Linear search
    }

    return 0;
}
// } Driver Code Ends