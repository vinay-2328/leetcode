class Solution {
public:
    int romanToInt(string s) {
     unordered_map<char,int> roman_number = {
         {'I' , 1},{'V' , 5},{'X' , 10},
         {'L' , 50},{'C' , 100},{'D' , 500},
         {'M' , 1000}
     } ;

     int total=0;
     int prev_value = 0;

     for(char& c : s){
         int current_value = roman_number[c];
         if(current_value > prev_value){
             total += current_value-2 * prev_value;
         }else{
             total+= current_value;
         }

         prev_value =current_value;
     }  

     return total;
    }
};