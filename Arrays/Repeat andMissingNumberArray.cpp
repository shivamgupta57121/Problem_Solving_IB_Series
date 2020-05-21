// Problem : Repeat and Missing Number Array
// Link : https://www.interviewbit.com/problems/repeat-and-missing-number-array/

// Solution : 

// Brute Force : 

vector<int> Solution::repeatedNumber(const vector<int> &A) {
    int n = A.size();
    
    vector<int> ans(2);
    vector<int> v(n,0);
    
    for(int i=0;i<n;i++){ 
        v[A[i]-1]++;
    }
    
    for(int i=0;i<n;i++){
        if(v[i]==2) ans[0] = i+1;
        else if(v[i]==0) ans[1] = i+1;
    }
    
    return ans;
}
