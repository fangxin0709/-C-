#include <iostream>
#include <string>
using namespace std;

int main() {
    string s,temp="";
    cin >> s;
    int sum=1;
	int num=s.length();
    for (int i=0;i<num; i++) {
        if (i<num-1 && s[i]==s[i+1]){
            sum++;
        }else{
        	temp+=s[i]+to_string(sum);
            sum=1;
        }
    }
    int num1=temp.length();
	if(num1>=num){
		cout<<s;
	}else{
		cout<<temp;
	}
    return 0;
}
using namespace std;

// int main() {
//     int n;
//     cin >> n;

//     // 用兩層迴圈跑每一格
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < n; j++) {

//             // 算離四個邊的距離
//             int top = i;
//             int left = j;
//             int bottom = n - 1 - i;
//             int right = n - 1 - j;

//             // 找最小距離
//             int minDist = top;
//             if (left < minDist) minDist = left;
//             if (bottom < minDist) minDist = bottom;
//             if (right < minDist) minDist = right;

//             // 數字 = 最小距離 + 1
//             cout << minDist + 1;

//             // 空格（最後一個不用）
//             if (j != n - 1) cout << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }
// #include <iostream>
// using namespace std;
// /* run this program using the console pauser or add your own getch, system("pause") or input loop */

// int main(int argc, char** argv) {
// 	int n;
// 	int x=0;
// 	cin>>n;
// 	for(int i=0;i<n;i++){
// 		for(int j=0;j<n;j++){
// 			if(i==0 || i==n-1){
// 				cout<<1;
// 			}else{
// 				if(n%2==0){
// 					if(i==n/2 || i==n/2-1){
// 						if(j<n/2){
// 							x++;
// 							cout<<x;
// 						}else if(j==n/2){
// //							x++;
// 							cout<<x;
// 						}else{
// 							x--;
// 							cout<<x;
// 						}
// 					}else{
// 						if(j<n/2 && x<j+1 && x < i+1 && x < n-i  ){
// 							x++;
// 							cout<<x;	
// 						}else if(j<n-1){
// 							cout<<x;
// 						}else{
// 							x--;
// 							cout<<x;
// 						}	
// 					}
					
// 				}
// 			}
// 		}
// 		x=0;
// 		cout<<endl;
// 	}
// 	return 0;
// }

