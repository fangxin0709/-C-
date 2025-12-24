#include <iostream>
#include <string>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct Pokemon{
	string name;
	int hp;
	int attack;
};
void attackPokemon(Pokemon &attacker,Pokemon &defender){
	cout<<attacker.name<<"§ðÀ»"<<defender.name<<"!"<<endl;
	defender.hp-=attacker.attack;
	if(defender.hp<0){
		defender.hp=0;
	}
	
	cout<<defender.name<<"³Ñ¾lHP:"<<defender.hp<<endl;
	cout<<"-------------"<<endl;
}
int main(int argc, char** argv) {
	Pokemon p1={"¥Ö¥d¥C",100,20};	
	Pokemon p2={"¤p¤õÀs",120,15};
	attackPokemon(p1,p2);
	attackPokemon(p2,p1);
	attackPokemon(p1,p2);
	return 0;
}
