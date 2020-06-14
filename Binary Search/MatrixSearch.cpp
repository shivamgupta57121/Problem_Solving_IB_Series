// Problem: Matrix Search
// Link:  https://www.interviewbit.com/problems/matrix-search/

//Solution:
int Solution::searchMatrix(vector<vector<int> > &A, int B) {
    size_t rows = A.size();
    size_t cols = A[0].size();
    int start = 0, end = (rows*cols)-1;
    while (start <= end) {
        int mid = start + (end-start)/2;
        int row = mid/cols, col = mid%cols;
        if (A[row][col] == B)
            return 1;
        else if (A[row][col] < B)
            start = mid + 1;
        else
        end = mid - 1;
    }
    return 0;
}

// size_t
// It is type which is used to represent the size of objects in bytes and is therefore used as the return type by the sizeof operator.
