class Solution {
public:
    int calPoints(vector<string>& operations) {
         stack <int> box;
     for (int i = 0; i < operations.size(); i++){
      if (operations[i] == "+"){
        int last_num = box.top();
        box.pop();
        int last_num2 = box.top();
        int sum = last_num + last_num2;
        box.push(last_num);
        box.push(sum);
      }
      else if (operations[i] == "D"){
        int product = box.top() * 2;
        box.push(product);
      }
      else if (operations[i] == "C"){
        box.pop();
      }
      else{
        box.push(stoi(operations[i]));
      }
     }
     int result = 0;
     while (!box.empty()){
      result += box.top();
      box.pop();
     }
     return result;   

    }
};