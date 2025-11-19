#include <iostream>
#include <string>
#include <math.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
//第一題 用字串陣列方式加總 
//	string str,temp="";
//	cin>>str;
//	int a=0;
//	int num=str.length();
//	for(int i=0;i<num;i++){
//		if(str[i]==','){
//			a = a+stoi(temp);
//			temp="";
//		}else{
//			temp=temp+str[i];
//		}
//	}
//	a = a+stoi(temp);
//	cout<<a;

//第二題 用字串陣列判斷加分 
//	string str,temp="";
//	cin>>str;
//	int a[99];
//	int num=str.length();
//	for(int i=0;i<num;i++){
//		if(str[i]!=','){
//			temp = temp+str[i];
//		}else{
//			a[i] = stoi(temp);
//			temp ="";
//			if(a[i]<90){
//				a[i]+=10;
//				if(a[i]>90){
//					int c=a[i]-90;
//					a[i]-=c;
//				} 
//			}
//			cout<<a[i]<<",";
//		}
//	}
//	a[num-1]=stoi(temp);
//	if(a[num-1]<90){
//		a[num-1]+=10;
//	}
//	cout<<a[num-1];
////第三題 用字串陣列算函數  
//	int x=0,y=0,z=0;
//	string str,temp="";
//	cin>>str;
//	int a[99];
//	int num=str.length();
//	for(int i=0;i<num;i++){
//		if(str[i]!=','){
//			temp = temp+str[i];
//		}else{
//			x = stoi(temp);
//			temp ="";
//		}
//	}
//	y=stoi(temp);
//	for(int i=x;i<=y;i++){
//		z=5*pow(i,3)+2*pow(i,2)+3*i+2;
//		cout<<"x="<<i<<",y="<<z<<endl;
//	}
	return 0;
}
