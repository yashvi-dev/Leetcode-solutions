class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& A) {
        int m= A.size();
        int n=A[0].size();
        int srow=0; int scol=0;
        int erow= m-1; int ecol=n-1;
        vector<int> ans;

        while(srow<=erow && scol<=ecol){
            // top: scol- ecol fix -row - iterating in colums
            for(int j=scol;j<=ecol;j++){
                ans.push_back(A[srow][j]);
            }
            // right : srow+1-erow : fix- col - iterating in rows
            for(int i=srow+1;i<=erow;i++){
                ans.push_back(A[i][ecol]);
            }
            // bottom: ecol-1- scol : fix-row - iterating in columns
            for(int j=ecol-1;j>=scol;j--){
                // to remove duplicate elements and avoid overlapping  
                if(srow==erow){ break ;}
                ans.push_back(A[erow][j]);
            }

            // left: erow-1-srow+1 : fix-colum- iterarting in rows
            for(int i=erow-1;i>=srow+1;i--){
                // to avoid overlapping an duplicacy 
                if(scol==ecol){break;}
                ans.push_back(A[i][scol]);
            }

            srow++;
            scol++;
            erow--;
            ecol--;
        }
        return ans;
    }
};