// Problem : Add One To Number
// Link : https://www.interviewbit.com/problems/add-one-to-number/

//Solution : 

vector<int> Solution::plusOne(vector<int> &A1) {
    vector<int> A=A1;
    int carry=1;
    for(int i=A.size()-1;i>=0;i--){
        int curr = carry + A[i];
        carry = curr/10;
        A[i] = curr%10;
    }
    if(carry) 
        A.insert(A.begin(),carry);
    while(true) {
        if(A[0]==0) A.erase(A.begin());
        else break;
    }
    return A;
}
