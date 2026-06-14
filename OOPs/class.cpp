#include<iostream>
using namespace std;
class Hero{
    //properties
    private:
    int health;
    public:
    int level;

    void print(){
        cout<<health;
    }
    //Making getter
    int getHealth(){
        return health;
    }
    int getLevel(){
        return level;
    }

    //Making Setter
    void setHealth(int h){
        health=h;
    }
    void setLevel(int s){
        level=s;
    }


};
int main(){
    Hero h1;
    h1.setHealth(25);
    cout<<"The health if h1 is:"<<h1.getHealth()<<endl;
    
    Hero *b=new Hero;
    b->setHealth(180);
    cout<<"The health if h1 is:"<<(*b).getHealth()<<endl;

    // // h1.level=100;
    // // h1.health=900;
    // // cout<<"Size of h1 is:"<<sizeof(h1);
    // cout<<"The health of h1 is:"<<h1.getHealth()<<endl;
    // cout<<"The Level of h1 is:"<<h1.level<<endl;
    
}