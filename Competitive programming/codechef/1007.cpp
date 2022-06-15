class Solution {
public:
    int minDominoRotations(vector<int>& tops, vector<int>& bottoms) {
 int count1=0, count2=0, count3=0, count4=0;
        int num1=tops[0];
        int num2=bottoms[0];
        
        for(int i=0; i<tops.size(); i++){
            //for num1---tops 1st value
            //count1 =no. of swapping required to make tops array as num1
            if(count1!=INT_MAX){
                if(tops[i]==num1){
                //nothing to do ;)
            }
            else if(bottoms[i]==num1){
                count1++;
            }
            else{
                count1=INT_MAX;
            }
            }
        
        
            //count2=no. of swapping required to make bottom array as num1
            if(count2!=INT_MAX){
            if(bottoms[i]==num1){
                //nothing to do ;)
            }
            else if(tops[i]==num1){
                count2++;
            }
            else{
                count2=INT_MAX;
            }
        }
            //for num2--bottom 1st value
            //count3= no. of swapping required to make tops array as num2 
            if(count3!=INT_MAX){
            if(bottoms[i]==num2){
                //nothing to do ;)
            }
            else if(tops[i]==num2){
                count3++;
            }
            else{
                count3=INT_MAX;
            }
        }
            if(count4!=INT_MAX){
                if(tops[i]==num2){
                //nothing to do ;)
            }
            else if(bottoms[i]==num2){
                count4++;
            }
            else{
                count4=INT_MAX;
            }
            }
            //count4= no. of swapping required to make bottoms array as num2
        }
    int res=min(min(count1,count2),min(count3,count4));
    return res==INT_MAX?-1: res;
    }
};