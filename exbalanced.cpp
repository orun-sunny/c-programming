// C++ implementation of the above approach
#include<bits/stdc++.h>
using namespace std;

bool isMatch(char ch1, char ch2){
        if(ch1 == '(' && ch2 == ')') return true;
        if(ch1 == '[' && ch2 == ']') return true;
        if(ch1 == '{' && ch2 == '}') return true;
        return false;
}

bool isBalanced(string s){
    int top = -1;
    for(int i =0;i<s.length();i++){
        //If top <0 or the current character is not matched
        //with the with open bracket at the top index
        if(top<0 || !isMatch(s[top], s[i])){
            ++top;
            s[top] = s[i];
        }
        //current character is matched with the with open bracket at the top index
        else{
            --top;
        }
    }
    return top == -1;
}

int main(){
    string exp = "(([][]{()}))";
    if(isBalanced(exp)){
        cout<<"Balanced" << endl;
    }
    else{
        cout<<"Not Balanced"<< endl;
    }
}
