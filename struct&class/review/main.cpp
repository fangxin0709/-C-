#include <iostream>
#include <ctime>
#include <cstdlib> 
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int openBox(int box[],int index,int n,int &zbox){
//	int zbox=0;
	if(index==n){
		return 0;
	}
	cout<<"打開第"<<index+1<<" 個寶箱，得到"<<box[index]<<" 金幣";
	if(box[index]>=15){
		cout<<" 大獎寶箱！";
	}
	if(box[index]==0){
		cout<<"(空箱)";
		zbox++;
	}
	cout<<endl<<endl;
	return box[index]+openBox(box,index+1,n,zbox);
} 
int main(int argc, char** argv) {
//	srand(time(NULL));
//	cout<<rand()%9999;
	int n;
	int box[10];
	int index=0;
	int zbox=0;
	cout<<"請設定寶箱數：";
	cin>>n;
	srand(time(NULL));
	for(int i=0;i<n;i++){
		box[i]=rand()%21;
//		cout<<box[i]<<" ";
	}
	int total=openBox(box,index,n,zbox);
	if(total>=50){
		cout<<"你今天發財了!"<<endl; 
	}else if(total>=20){
		cout<<"收獲不錯!"<<endl;
	}else{
		cout<<"下次再努力!"<<endl; 
	}
	cout<<"總金幣："<<total<<endl;
	cout<<"空箱數量："<<zbox; 
	return 0;
}
