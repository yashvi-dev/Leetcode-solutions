class Solution {
    /*[-5, 1, 5, 0,-7]= o/p=1 
1.new arr size= original array size+1
2.new array kaise form hogi-> 
idx[0]-> 0 kuki -5 ke pehele koi element nahi hai 
idx[1]-> -5 kuki 1 ke pehle -5 hai i.e sum of all elemts before 1
idx[2]-> -5+1=-4 
idx[3]-> -5+1+5=1 
idx[4]-> -5+1+5+0=1
idx[5]-> -5+1+5+0+ -7= -6
*/ 
    public int largestAltitude(int[] gain) {
    int[] sol= new int[gain.length+1];
    sol[0]=gain[0];
    for(int i=1;i<gain.length;i++){
        sol[i]=sol[i-1]+gain[i];
    }
    int max = 0;
    for(int i=0;i<sol.length;i++){
        if(sol[i]>max){
            max=sol[i];
        }
    }
    return max;
}
}