class Solution {
public:
    string interpret(string command) {
        string ans = "";
        int n = command.size();
        for(int i = 0 ; i<n ; i++){
            if(command[i] == 'G' && i == 0)
                ans += command[i];
            else if(command[i] == 'G')
                ans += command[i];
            else if(command[i] == '(' && i < n && command[i+1] == ')')
                ans += 'o'  , i++;
            else if(command[i] == '(' && i < n && command[i+1] != ')')
                ans += "al" , i++ ;
        }

        return ans;
    }
};