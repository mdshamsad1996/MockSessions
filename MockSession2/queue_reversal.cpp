#include <iostream>
#include<stack>
using namespace std;

string removingDuplicates(string str){
    
       stack <char> st;
	    st.push(str[0]);
	    string output ="";
	    for(int i =1;i<str.length();i++){
	        
	        if(!st.empty() && st.top() == str[i])
	            st.pop();
	        else
	            st.push(str[i]);
	    }
	    while(!st.empty()){
	        
	        output =  st.top()+output;
	        st.pop();
	    }
	    return output;
    
}
int main() {
	//code
		int t;
	cin>>t;
	while(t--){
	    string str;
	    cin>>str;
	    
	    string output = removingDuplicates(str);
	    if(output == "")
	        std::cout<<"$"<<endl;
	   else
	        std::cout<<output<<endl;
	}
	return 0;
}