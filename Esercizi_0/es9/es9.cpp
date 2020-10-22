using namespace std;
#include <iostream>
int main() {
    cout<<"LETTERE MAIUSCOLE:\n";
    for(int i=65;i<=90;++i){
        cout<<(char) i<<endl;
    }
    cout<<"LETTERE MINUSCOLE:\n";
    for(int e=97; e<=122 ; ++e ) {
        cout<<(char) e<<endl;
    }
    cout<<"NUMERI DAL 0 AL 9:\n";
    for(int f=48; f<=57 ; ++f ) {
        cout<<(char) f<<endl;
    }
    return 0;
}