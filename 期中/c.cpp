//#include <iostream>
//using namespace std;
///* run this program using the console pauser or add your own getch, system("pause") or input loop */
//
//int main(int argc, char** argv) {
//	int a,b,c,d,e,f,g;
//	cin>>d;
//	for(int i=1;i<=50;i++){
//		a = i*d;
//		b
//		
//	}
//	cout<<c;
//	return 0;
//}
#include <iostream>
using namespace std;
int main() {
    int d;
    cin >> d; 

    long long a = 0;
    long long b = 1; 
    long long c = 1; 

    for (int i = 1; i <= 50; i++) {
        a += b;
        b += c;
        c += d; 
    }

    cout << a;

    return 0;
}

