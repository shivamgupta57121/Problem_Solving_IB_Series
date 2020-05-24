// Problem: Find Duplicate in Array
// Link: https://www.interviewbit.com/problems/find-duplicate-in-array/

// Solution : 

// Brute Force: Accepted 
int Solution::repeatedNumber(const vector<int> &A) {
    int n = A.size()-1;
    vector<int> v(n,0);
    for(int i=0;i<=n;i++){
        v[A[i]-1]++;
        if(v[A[i]-1]>1) return A[i];
    }
    return -1;
}
