class Solution {
public:
    bool isValid(string s) {
        
    char Stack[s.length()];  
    int top = -1;  
    

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '{' || s[i] == '[' || s[i] == '(') {
            Stack[++top] = s[i];  
        }
        else if (s[i] == '}' || s[i] == ']' || s[i] == ')') {
            if (top == -1) { 
                
                return false;  
            }

            if ((s[i] == '}' && Stack[top] == '{') ||
                (s[i] == ']' && Stack[top] == '[') ||
                (s[i] == ')' && Stack[top] == '(')) {
                top--;  
            } else {
         
                return false; 
            }
        }
    }

    if (top == -1)
       return true;
    else
        return false;   
    }
    
};