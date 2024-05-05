#include <iostream>
using namespace std;
 int main(){
	 int n, max = -1, min = 11;
	 cin >> n;
	 int a[n];
	 for(int i=0; i<n; i++){
		 cin >> a[i];
	 }
	 for(int i=0; i<n; i++){
	 if(a[i] > max){
		 max = a[i];
		 }else if(a[i] < min){
		 min = a[i];
	 	}
	}
 	cout << max <<' '<< min;
 }