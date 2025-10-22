#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int a;
	int y=1;
	cin>>a;
	for(int i=1;i<=a;i++){
		for(int z=a-1;z>=i;z--){
			cout<<" ";
		}
		for(int b=1;b<=2*i-1;b++){
			cout<<y;
			y = (y%9)+1;
		}
//		for(int j=1;j<i;j++){
//			cout<<y;
//			y = (y%9)+1;
//		}
		cout<<endl;
	}
	return 0;
}
