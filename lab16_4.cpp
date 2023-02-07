#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int &,int &,int &,int &);

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(a,b,c,d);
	    cout << a << " " << b << " " << c << " " << d << "\n";
	}
	
	return 0;
}
void shuffle(int &a,int &b,int &c,int &d){
    int N[]={50,100,500,1000};
	for(int i=0;i<4;i++){
        int r = rand()%4;
        int x = N[i];
        N[i]=N[r];
        N[r]=x;
        
    }
    a=N[0];
    b=N[1];
    c=N[2];
    d=N[3];
    
}