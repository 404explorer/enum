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
    
    Movie thing=(Movie)value;
    cout<<"----\n";
    cout<<thing;

    return 0;
}