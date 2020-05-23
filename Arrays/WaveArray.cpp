// Problem : Wave Array
// Link : https://www.interviewbit.com/problems/wave-array/

// Solution : 

vector<int> Solution::wave(vector<int> &A) {
    int n = A.size();
    vector<int> v(n);
    for(int i=0;i<n;i++) v[i] = A[i];
    sort(v.begin(),v.end());
    for(int i=1;i<n;i+=2) {
        int temp = v[i];
        v[i] = v[i-1];
        v[i-1] = temp;
    }
    return v;
}
