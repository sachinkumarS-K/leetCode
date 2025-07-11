class Solution {
public:
    string complexNumberMultiply(string num1, string num2) {
        
        int x = num1.find('+');
        int a = stoi(num1.substr(0, x));
        int b = stoi(num1.substr(x + 1, num1.length() - x - 2)); 

        
        int y = num2.find('+');
        int c = stoi(num2.substr(0, y));
        int d = stoi(num2.substr(y + 1, num2.length() - y - 2)); 

    
        int real = a * c - b * d;
        int imag = a * d + b * c;

        return to_string(real) + "+" + to_string(imag) + "i";
    }
};
