#include<iostream>
enum Movie{superman=1,preadator,spiderman,ironman,wonderwoman,deadpull};
using  namespace std;
int main(){

    Movie A=spiderman;
    Movie B=wonderwoman;
    
    int total=A+B;
    cout<<deadpull<<std::endl;
    cout<<A<<' '<<B<<" "<<total;

    cout<<"\nEnter number\n";
    int value;
    cin>>value;

    //converting integer to enum Mivie datatype
    Movie thing=(Movie)value;

    cout<<"----\n";
    //!!!Returns INTEGER not ENUM name.
    cout<<thing<<endl;
cout<<"----\n";
cout<<ironman<<endl;
cout<<wonderwoman<<endl;
//Enums i think kinda aliases for integers variables
//What are they are for??
    int sum=ironman+wonderwoman;
    cout<<sum;
    
    return 0;
}