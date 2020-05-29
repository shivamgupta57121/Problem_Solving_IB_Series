// Problem : Intersection Of Sorted Arrays
// Link : https://www.interviewbit.com/problems/intersection-of-sorted-arrays/

// Solution : 

vector<int> Solution::intersect(const vector<int> &A, const vector<int> &B) {
    int n1 = A.size();
    int n2 = B.size();
    int i=0, j=0;
    vector<int> ans;
    while(i<n1 && j<n2){
        if(A[i]==B[j]){
            ans.push_back(A[i]);
            i++;
            j++;
        }
        else if(A[i]>B[j]) j++;
        else i++;
    }
    return ans;
}