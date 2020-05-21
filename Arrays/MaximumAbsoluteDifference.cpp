// Problem : Maximum Absolute Difference
// Link : https://www.interviewbit.com/problems/maximum-absolute-difference/

// Soultion :

// Without Using extra space :  
int Solution::maxArr(vector<int> &A) {
    int n=A.size();
    int maxAdd = INT_MIN, minAdd = INT_MAX;
    int maxSub = INT_MIN, minSub = INT_MAX; 
    for(int i=0;i<n;i++){
        maxAdd = max(maxAdd,A[i]+i); 
        minAdd = min(minAdd,A[i]+i);  
        maxSub = max(maxSub,A[i]-i); 
        minSub = min(minSub,A[i]-i); 
    }
    return max(maxAdd-minAdd,maxSub-minSub);
}

// Using extra space :  
int Solution::maxArr(vector<int> &A) {
    int n=A.size();
    vector<int> add;
    vector<int> sub;
    for(int i=0;i<n;i++){
        add.push_back(A[i]+i+1);
        sub.push_back(A[i]-(i+1));
    }
    int maxAdd = *max_element(add.begin(), add.end()); 
    int minAdd = *min_element(add.begin(), add.end()); 
    int maxSub = *max_element(sub.begin(), sub.end()); 
    int minSub = *min_element(sub.begin(), sub.end()); 
    return max(maxAdd-minAdd,maxSub-minSub);
}
