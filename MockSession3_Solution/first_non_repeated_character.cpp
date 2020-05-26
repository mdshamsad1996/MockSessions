#include <iostream>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	    int n, flag = 0;
	    string s;
	    cin>>n>>s;
	    int count[26] = {0};
	    for(int i=0;i<26;i++){
	        count[s[i]-'a']++;
	    }
	    for(int i=0; i<s.length();i++){
	        if(count[s[i]-'a'] == 1){
	            flag = 1;
	            std::cout<<s[i]<<endl;
	            break;
	        }
	    }
	    if(flag == 0)
	        std::cout<<-1<<endl;
	}
	return 0;
}