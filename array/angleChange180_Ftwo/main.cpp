#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int n,a[99999],c,d,e,f,b[99999];
	cin>>n;
	for(int i=0;i<n;i++){
		int sum=0;
		cin>>c>>d;
		e =c*d;
		for(int j=0;j<e;j++){
			cin>>a[j];
		}
		for(int x=e-1;x>=0;x--){
			b[e-x-1]=a[x];
			
		}
		for(int y=0;y<e;y++){
			if(b[y]==a[y]){
				sum++;
			}
		}
		if(sum==e){
			cout<<"go forward"<<endl;
		}else{
			cout<<"keep defending"<<endl;
		}
	} 
	return 0;
}
