
#include<iostream>
using namespace std;

int main(){
	int n=5;
	for(int i=0; i<n; i++){
		int ch = 1;
		for(int j=1; j<=i+1; j++){
			cout<<ch<<" ";
			ch++;
		} 
		cout<<endl;
	}
}
