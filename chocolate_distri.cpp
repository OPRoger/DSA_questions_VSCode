/* Chocolate Distribution Problem
Last Updated : 26 Dec, 2023
Given an array of N integers where each value represents the number of chocolates in a packet. 
Each packet can have a variable number of chocolates. There are m students, 
the task is to distribute chocolate packets such that: 

Each student gets one packet.
The difference between the number of chocolates in the packet with maximum chocolates and 
the packet with minimum chocolates given to the students is minimum.
Examples:

Input : arr[] = {7, 3, 2, 4, 9, 12, 56} , m = 3 
Output: Minimum Difference is 2 
Explanation:
We have seven packets of chocolates and we need to pick three packets for 3 students 
If we pick 2, 3 and 4, we get the minimum difference between maximum and minimum packet sizes.

Input : arr[] = {3, 4, 1, 9, 56, 7, 9, 12} , m = 5 
Output: Minimum Difference is 6 

Input : arr[] = {12, 4, 7, 9, 2, 23, 25, 41, 30, 40, 28, 42, 30, 44, 48, 43, 50} , m = 7 
Output: Minimum Difference is 10  */

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int chocolateDistribution(vector<int>& arr , int stu) {
        sort(arr.begin(), arr.end());
        int mindiff=INT_MAX;
        
        for(int i=0; i + stu - 1<arr.size()-1; i++){
            int diff=arr[i+stu-1]-arr[i];
            if(diff<mindiff){
                mindiff=diff;
            }
        }
        return mindiff; 
    }
};

int main() {
    Solution su;
    int N;
    cout<<"enter the size"<<endl;
    cin >> N;
    int stu;

    cout<<"enter the students"<<endl;
    cin>>stu;

    vector<int> arr(N);  

    cout<<"enter the array"<<endl;
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < N; i++) {
        cout<< arr[i] << " ";
    }

    cout<<"minimun diffrence is "<<su.chocolateDistribution(arr,stu)<<endl; 

    return 0;
}
