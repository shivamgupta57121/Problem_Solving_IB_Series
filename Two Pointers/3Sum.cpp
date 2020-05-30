// Problem : 3 Sum
// Link : https://www.interviewbit.com/problems/3-sum/

// Solution : 
int Solution::threeSumClosest(vector<int> &A, int B) {
    
    int n = A.size();
    int nearVal, minDif = INT_MAX;
    sort(A.begin(),A.end());
    
    for(int i=0;i<n-2;i++){
        int j=i+1, k=n-1;
        while(k>j){
            int sum = A[i]+A[j]+A[k];
            int dif = abs(sum-B);
            if(dif==0) return B;
            
            if(dif < minDif) {
                minDif = dif;
                nearVal = sum;
            }
            
            if(sum<B) j++;
            else k--;
        }
    }
    return nearVal;
    
}
