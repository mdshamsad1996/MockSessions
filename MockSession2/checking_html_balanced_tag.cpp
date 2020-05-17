
// Task: checking html tag balance

#include <iostream>
#include<stack>
using namespace std;

// This function to get tag after remving / character

string removeClosingTag(string s){
    
    string output = "";
    output = output + s[0];
    for(int i = 2; i<s.length(); i++){
        output = output + s[i];
    }
    return output;
}

// Checking for Balanced valid html tag

bool isBalancedValidHtmlTag(string s[], int n){
    
    stack <string> st;

	for(int i = 0; i<n; i++){
	    
	   if(s[i][1] != '/')
	        st.push(s[i]);
	    
	   else if(s[i][1] == '/' && !st.empty() && st.top() == removeClosingTag(s[i]))
	        st.pop();
	   else
	        return false;
	}
	
	if(st.empty())
	    return true;
    return false;
    
}

// Main (Entry point)
int main() {

	string s[] = {"<html>","<body>","<div>","</div>","</body>","</html>"};
	
	int n = sizeof(s)/sizeof(s[0]);
	
	if(isBalancedValidHtmlTag(s,n))
	    std::cout<<"Balanced Valid Html Tag"<<endl;
	 else
	   std::cout<<"Unbalanced valid Html Tag"<<endl;
	
	return 0;
}
