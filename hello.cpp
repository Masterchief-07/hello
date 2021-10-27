#include<iostream>

using namespace std;

int main(int argv, char* argc[]){

	if(argv>1){
		for(int i=1; i<argv; i++){
			cout<<argc[i]<<" ";
		}
	}
	else{
		cout<<"HELLO WORLD";
	}	
	cout<<endl;
	return 0;
	
}
