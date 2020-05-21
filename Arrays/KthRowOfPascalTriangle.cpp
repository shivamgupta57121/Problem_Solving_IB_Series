// Problem : Kth Row of Pascal's Triangle
// Link : https://www.interviewbit.com/problems/kth-row-of-pascals-triangle/

// Solution : 

// k th Row of Pascal triangle 
// kC0, kC1, ... kCk  --- k+1 terms.

// kCr = k!/ r!(k-r)!
// kC(r+1) = k!/ (r+1)! * (k-r-1)! = (k! * (k-r) ) / (r! * (r+1) * (k-r)! )
// kC(r+1) = kCr * (k-r) / (r+1)

//kC0 is always 1

vector<int> Solution::getRow(int k) {
    vector<int>ans;// to store the resultant row
        
    int val  = 1;
    for( int r = 0; r <= k ; r++){
        ans.push_back(val);
        val = val * (k - r)/(r + 1);
    }
    return ans;
}
