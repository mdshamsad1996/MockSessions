#include <iostream>
#include <set>
using namespace std;

bool isSumZero(int a[], int n){
    set<int> st;
    st.insert(0);
    int sum = 0;
    for(int i = 0; i<n; i++){
        sum = sum+a[i];
        if(st.find(sum)!=st.end())
                return true;
        st.insert(sum);
    }
    return false;
    
}
int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i = 0; i<n; i++){
	        cin>>a[i];
	    }
	    if(isSumZero(a,n))
	        std::cout<<"Yes"<<endl;
	   else
	        std::cout<<"No"<<endl;
	}
	return 0;
}