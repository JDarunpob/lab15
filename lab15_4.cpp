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
	    cout << a << " " << b << " " << c << " " << d << endl;
	}
	
	return 0;
}

//Do not modify source code above this line
void shuffle(int &a,int &b,int &c,int &d){
		int x[4] = {a, b, c, d};
    for (int i = 3; i > 0; i--) {
        int j = rand() % (i + 1);
        int temp = x[i];
        x[i] = x[j];
        x[j] = temp;
    }
    a = x[0];
    b = x[1];
    c = x[2];
    d = x[3];
}
	

