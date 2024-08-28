#include <iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	int arr[n];
	int maxi = 0;
	int cnt = 0;
	for(int i = 0; i < n; i++){
	    cin >> arr[i];
	}
	for(int i = 0; i < n; i++){
	    if(arr[i] == 0){
	        cnt = 0;
	    }
	    else{
	        cnt++;
	    }
	    maxi = max(maxi, cnt);
	}
	cout<<maxi<<"\n";
}
