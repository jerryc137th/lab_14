#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int *,int *, int *, int *); //Modify input arguments to pointer 

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(&a,&b,&c,&d); //Modify input arguments to pointer 
	    cout << a << " " << b << " " << c << " " << d << "\n";
	}
	
	return 0;
}


void shuffle(int *a,int *b,int *c,int *d){
	int e[4] = {},r,w[4]={50,100,500,1000},i=0;
	while(i<4){
		r = rand()%4;
		
		bool foul = 0;
		for(int j = 0;j<i;j++){
			if(w[r]==e[j]) foul = 1;
		}
		if(!foul){
			e[i] = w[r];
			i++;
		}
	}
	*a = e[0];
	*b = e[1];
	*c = e[2];
	*d = e[3];

	
}
