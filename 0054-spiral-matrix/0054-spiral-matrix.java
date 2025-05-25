class Solution {
    public List<Integer> spiralOrder(int[][] matrix) {
        int m= matrix.length;
        int n= matrix[0].length;
        int srow =0; int scol =0;int erow=m-1;int ecol=n-1;
        ArrayList<Integer> list= new ArrayList<>();

        while(srow<=erow && scol<=ecol){
            // top
            for(int j=scol;j<=ecol;j++){
                list.add(matrix[srow][j]);
            }

            // right
            for(int i=srow+1 ;i<=erow;i++){
                list.add(matrix[i][ecol]);
            }

            // botton
            for(int j=ecol-1;j>=scol;j-- ){
                if(srow==erow){
                    break;
                }
                list.add(matrix[erow][j]);
            }

            // left
            for(int i= erow-1;i>=srow+1;i--){
                if(scol==ecol){
                    break;
                }
                list.add(matrix[i][scol]);
            }

            srow++;
            scol++;
            erow--;
            ecol--;
        }
        return list;
    }
}