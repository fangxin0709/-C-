#include <iostream>
#include <string>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
class Pokemon{
		private:
			string name;
			int hp;
			int attack;
		public:
			Pokemon(string n,int h,int a){
				name=n;
				hp=h;
				attack=a;
			}
			void attackPokemon(Pokemon &enemy){
				cout<<name<<"§ðÀ»"<<enemy.name<<"!"<<endl;
				enemy.hp-=attack;
				if(enemy.hp<0){
					enemy.hp=0;
				}
				
				cout<<enemy.name<<"³Ñ¾lHP:"<<enemy.hp<<endl;
				cout<<"-------------"<<endl;
			}
			int getHp(){
				return hp;
			}
};
int main(int argc, char** argv) {
	Pokemon p1("¥Ö¥d¥C",100,20);	
	Pokemon p2("¤p¤õÀs",120,15);
	p1.attackPokemon(p2);
    p2.attackPokemon(p1);
    p1.attackPokemon(p2);
    cout<<p1.getHp();
    cout<<p2.getHp();
	return 0;
}
