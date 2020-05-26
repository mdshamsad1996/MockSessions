#include <iostream>
using namespace std;
int seggregate(int a[], int n){
    int j = 0;
    for(int i = 0;i<n;i++){
        if(a[i] < 0){
            int t = a[i];
            a[i] = a[j];
            a[j] = t;
            j++;
        }
    }
    return j;
}
int findSmPositiveMissingNumber(int a[], int n){
    for(int i = 0; i<n;i++){
        if(abs(a[i])-1<n && a[abs(a[i])-1] > 0 ){
            a[abs(a[i])-1] = - a[abs(a[i])-1];
        }
    } 
    for(int i = 0;i<n;i++){
        if(a[i]>0)
            return i+1;
    }
    return n+1;
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
	    int index = seggregate(a,n);
	    std::cout<<findSmPositiveMissingNumber(a+index,n-index)<<endl;
	}
	return 0;
}