#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int r,c;
	while(cin>>r>>c){
		int a[99][99];
		for(int i=0;i<r;i++){
			for(int j=0;j<c;j++){
				cin>>a[i][j];
			}
		}
		for(int i=0;i<c;i++){
			for(int j=0;j<r;j++){
				cout<<a[j][i]<<" ";
			}
			cout<<endl;
		}
	}
	return 0;
}
