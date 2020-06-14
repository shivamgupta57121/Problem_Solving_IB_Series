// Problem: Sorted Insert Position
// Link: https://www.interviewbit.com/problems/sorted-insert-position/

// Solution: 
int Solution::searchInsert(vector<int> &A, int B) {
    int n = A.size();
    int start=0, end = n-1;
    while(start<=end){
        int mid = (start+end)/2;
        if(A[mid]==B) return mid;
        else if(A[mid]>B){
            end = mid-1;
        }
        else {
            start = mid+1;
        }
    }
    return start;
}
