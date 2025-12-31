#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int n,m;
	bool found=false;
	bool found1=false;
	int max=0,min=100,temp;
	int max_i,max_j,min_i,min_j;
	cin>>n>>m;
	int a[n][m];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>a[i][j];
			if(a[i][j]>max){
				max = a[i][j];
				max_i=i;
				max_j=j;
			}
			if(a[i][j]<min){
				min = a[i][j];
				min_i=i;
				min_j=j;
			}
		}
	}
	temp = a[max_i][max_j];
	a[max_i][max_j] =a[min_i][min_j];
	a[min_i][min_j] = temp;
	
	for(int z=0;z<n;z++){
		for(int y=0;y<m;y++){
			cout<<a[z][y]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
