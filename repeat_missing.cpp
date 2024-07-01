/*
You are given a read only array of n integers from 1 to n.

Each integer appears exactly once except A which appears twice and B which is missing.

Return A and B.

Note: Your algorithm should have a linear runtime complexity. Could you implement it without using extra memory?

Note that in your output A should precede B.

Example:

Input:[3 1 2 5 3] 

Output:[3, 4] 

A = 3, B = 4
*/

vector<int> Solution::repeatedNumber(const vector<int> &A) {
       
int rept=-1;
int miss=-1;
    int n=A.size();
   
    int freq[n+1]={0};
   
    for(int i=0;i<n;i++){
        freq[A[i]]++;
    }
   
    for(int i=0;i<=n;i++){
        if(freq[i]==0)
        miss=i;
        if(freq[i]==2)
        rept=i;
    }
   
    return {rept,miss};
}
