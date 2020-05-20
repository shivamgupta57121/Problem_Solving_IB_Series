// Problem : Min Steps In Infinite Grid
// Link : https://www.interviewbit.com/problems/min-steps-in-infinite-grid/

// Solution : 

int Solution::coverPoints(vector<int> &A, vector<int> &B) {
    int ans=0;
    for(int i=1;i<A.size();i++){
        
        int x = abs(A[i-1]-A[i]);
        int y = abs(B[i-1]-B[i]);
        
        ans += abs(x-y) + min(x,y);
    }
    return ans;
}

