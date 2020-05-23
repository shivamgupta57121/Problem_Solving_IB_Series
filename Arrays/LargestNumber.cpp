// Problem : Largest Number
// Link : https://www.interviewbit.com/problems/largest-number/

// Solution : 
bool mySort(int num1, int num2){
    string str1 = to_string(num1);
    string str2 = to_string(num2);
    if(str1+str2>str2+str1) return true;
    return false;
}
string Solution::largestNumber(const vector<int> &A) {
    int n = A.size();
    vector<int> v(n);
    for(int i=0;i<n;i++){
        v[i]=A[i];
    }
    sort(v.begin(),v.end(),mySort);
    if(!v[n-1]) return "0"; // if whole array contain zeros.
    string ans = "";
    for(int i=0;i<n;i++) ans+=to_string(v[i]);
    return ans;
}
