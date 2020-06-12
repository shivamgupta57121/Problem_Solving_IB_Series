// Problem: Square Root of Integer
// Link:  https://www.interviewbit.com/problems/square-root-of-integer/

//Solution:
int Solution::sqrt(int n) {
    
    if(n==0||n==1) return n;
    
    long long int start = 1;
    long long int end = n;
    long long int ans;
    while(start<=end){
        long long int mid=(start+end)/2;
        if(mid*mid==n) return mid;
        else if(mid*mid>n) end=mid-1;
        else {
            start=mid+1;
            ans=mid;
        }
    }
    return ans;
}
