
#include<iostream>
using namespace std;

int main(){
	// Ranges are taken by seeing question
	for(int i=0;i<5;i++){
		for(int j=0;j<6;j++){
			if(i==0 or j==0 or i==4 or j==5){ //i=n-1 or j==n-1
				cout<<"* ";
			}
			else{
				cout<<"  ";
			}
		}
		cout<<endl;
	}
	return 0;
}
