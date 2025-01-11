#include<iostream>
using namespace std;
int main(){
    char button;
    cout<<"Enter the button:1)English \n 2)Hindi \n 3)Tamil \n 4)Gujarati \n 5)Punjabi" <<endl;
    cin>>button;
    // if ( button =='a'){
    //     cout<<"Hello";
    // }
    // else if (button=='b'){
    //     cout<<"Namaste";
    // }
    // else if (button=='c'){
    //     cout<<"Vannakam";
    // }
    // else if (button=='d'){
    //     cout<<"Jaijeneandra";
    // }
    switch (button)
    {
    case'a':
        cout<<"Hello";
        break;
    case'b':
        cout<<"Namaste";
        break;
    case'c':
        cout<<"Vanakkam";
        break;
    case'd':
        cout<<"Jaijenendra";
        break;//come out of the switch
    case'e':
        cout<<"Satshirkaal";
        break;
    
    default:
        cout<<"We are still learning that";
        break;
    }


}