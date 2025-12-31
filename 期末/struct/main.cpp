#include <iostream>
#include <string>
using namespace std;

// TODO 1：定義結構 Item，包含
// name（字串）、price（整數）、qty（整數）
struct item {
    string name;
 	int price;
    int qty;
}thing;

int main() {
    int N;
    // TODO 2：讀入商品筆數 N
    cin >>N;
    // TODO 3：初始化總金額
    int total = 0;

    // TODO 4：紀錄金額最大的商品名稱與金額
    string topName = "";
    int topAmount = 0;

    // TODO 5：使用 for 迴圈讀入 N 筆商品資料
    for ( int i=0;i<N;i++ ) {
    	

        // TODO 6：讀入商品名稱、單價、數量
        cin >> thing.name>>thing.price>>thing.qty;

        // TODO 7：計算該商品金額（單價 × 數量）
        int amount = thing.price*thing.qty;

        // TODO 8：累加總金額
        total += amount;

        // TODO 9：判斷是否為目前最大金額商品
        if ( amount>topAmount ) {
        	topName = thing.name;
            topAmount = amount;
        }
    }

    // TODO 10：依指定格式輸出結果
    cout << "TOTAL = " << total << endl;
    cout << "TOP = " << topName << " "
         << topAmount << endl;

    return 0;
}

