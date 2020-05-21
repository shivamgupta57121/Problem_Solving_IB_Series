// Problem : Pascal Triangle
// Link : 

// Solution : https://www.interviewbit.com/problems/pascal-triangle/

vector<vector<int> > Solution::solve(int A) {
        vector<vector<int>> arr(A);
        for(int i=0;i<A;i++){
            arr[i].resize(i+1);
            for(int j=0;j<=i;j++){
                if(j==0 || j==i) arr[i][j]=1;
                else arr[i][j]= arr[i-1][j-1]+arr[i-1][j];
            }
        }
        return arr;
}
