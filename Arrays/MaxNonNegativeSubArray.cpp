// Problem : Max Non Negative SubArray
// Link : https://www.interviewbit.com/problems/max-non-negative-subarray/

// Solution : 

vector<int> Solution::maxset(vector<int> &A) {
    int n = A.size(), index, len=0;
    long long int maxSum=0;
    for(int i=0;i<n;){
        int count = 0;
        long long int sum = 0;
        while(i<n && A[i]>=0){
            count++;
            sum+=A[i];
            i++;
        }
        if(sum>maxSum || (sum==maxSum && count>len) ){
            maxSum = sum;
            index = i-count;
            len = count;
        }
        if(A[i]<0){ 
            count=0;
            sum=0;
        }
        i++;
    }
    vector<int> ans;
    for(int i=index;i<len+index;i++) ans.push_back(A[i]);
    return ans;
}
