// Problem : Max Sum Contiguous Subarray
// Link : https://www.interviewbit.com/problems/max-sum-contiguous-subarray/

// Solution : 

// Kadane's algorithm
int Solution::maxSubArray(const vector<int> &A) {
    int cur=A[0];
    int maxS=A[0];
    for(int i=1;i<A.size();i++){
        cur = max(cur+A[i],A[i]);
        maxS = max(cur,maxS);
    }
    return maxS;
}
