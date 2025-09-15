

#include <iostream>
using namespace std;

pair<int, int> linearsearch(int arr[3][3], int target){
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(arr[i][j]==target){
                return {i, j};
            }
        }
    }
    return {-1, -1};
}

int main()
{
    
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    pair<int , int> ans= linearsearch(arr, 4);
    if(ans.first !=-1){
        cout<< "found at "<<ans.first<<","<<ans.second;
    }else{
        cout<<"not found"<<endl;
    }
    return 0;
}