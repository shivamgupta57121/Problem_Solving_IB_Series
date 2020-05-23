// Problem : Max Distance
// Link : 

// Solution : interviewbit.com/problems/max-distance/

// Brute Force (Will reward partial points)
int Solution::maximumGap(const vector<int> &A) {
    int n = A.size();
    int m=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            if(A[i]>=A[j]) m = max(m,i-j); 
        }
    }
    return m;
}
