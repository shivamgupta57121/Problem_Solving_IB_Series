// Problem : Anti Diagonals
// Link : interviewbit.com/problems/anti-diagonals/

// Solution : 

vector<vector<int> > Solution::diagonal(vector<vector<int> > &A) {
    int n = A.size();
    int diag = 2*n -1;
    vector<vector<int>> ans;
    for(int i=0;i<n;i++){
        vector<int> v;
        int val = i;
        for(int j=0;j<=i;j++,val--){
            v.push_back(A[j][val]);
        }
        ans.push_back(v);
    }
    for(int i=1;i<n;i++){
        vector<int> v;
        int val = i;
        for(int j=n-1;j>=i;j--,val++){
            v.push_back(A[val][j]);
        }
        ans.push_back(v);
    }
    
    return ans;
}


// Use Diagonals properties : 
// Sum of i and j remains constant for all elements of a diagonal.
// So we can use this property and traverse the 2D array in general order.

vector<vector<int> > Solution::diagonal(vector<vector<int> > &A) {
    int n = A.size();
    int diag = 2*n -1;
    vector<vector<int>> ans(diag);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++) ans[i+j].push_back(A[i][j]);
    }
    return ans;
}
