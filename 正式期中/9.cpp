 #include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int a;
	cin>>a;
	for(int i=1;i<=a;i++){
		for(int j=1;j<=i;j++){
			cout<<"*";
		}
		cout<<endl;
	}
	for(int q=a-1;q>=0;q--){
		for(int z=1;z<=q;z++){
			cout<<"*";
		}
		cout<<endl;
	}
	return 0;
}
