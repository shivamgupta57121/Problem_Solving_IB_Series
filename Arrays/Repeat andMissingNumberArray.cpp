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


// Space Complexity : O(1) 
// Applying Mathematics

vector<int> Solution::repeatedNumber(const vector<int> &A) {
    
    long long n = A.size();
    vector<int> ans(2);
    long long sumAct = 0, sumSqAct = 0;
    long long sum = (n*(n+1))/2, sumSq = (n*(n+1)*(2*n+1))/6;
    
    for(int i=0;i<n;i++) {
        sumAct+=A[i];
        sumSqAct+=(long long)A[i]*(long long)A[i];
    }
    int A_Sub_B = sumAct-sum;
    int A_Add_B = (sumSqAct-sumSq)/A_Sub_B;
    ans[0] = (int)(A_Add_B + A_Sub_B)/2;
    ans[1] = (int)(A_Add_B - A_Sub_B)/2;
    
    return ans;
}
