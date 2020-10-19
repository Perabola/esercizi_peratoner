using namespace std;
#include <iostream> 
int main() {
    int x,y,z;
    cout<<"Inserire prima cifra\n";
    cin>>x;
    cout<<"Inserire seconda cifra\n";
    cin>>y;
    cout<<"inserire terza cifra\n";
    cin>>z;
    int m; // minore;
    int M; // MAGGIORE;
    int S; // Somma;
    S=x+y+z;
    int Med; // Media;
    Med=S/3;
    int P; // Prodotto;
    P=x*y*z;
    if(x>y & x>z) {   // x è il piu grande;
        M=x;
    }
    if(x<y & x<z) {  // x è il piu piccolo;
        m=x;
    }
    if(y>x & y>z) {  // y è il piu grande;
        M=y;
    }
    if(y<x & y<z) {  // y è il piu piccolo;
        m=y;
    }
    if(z>y & z>x) {  // z è il piu grande;
        M=z;
    }
    if(z<y & z<x) {  // z è il piu piccolo;
        m=z;
    }
    cout<<"SOMMA....."<<S<<endl;
    cout<<"MEDIA....."<<Med<<endl;
    cout<<"PRODOTTO.."<<P<<endl;
    cout<<M<<"  E' IL PIU GRANDE DI TUTTI\n";
    cout<<m<<"  E' IL PIU PICCOLO DI TUTTI\n";
    return 0;

}