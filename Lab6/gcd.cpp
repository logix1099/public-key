#include <iostream>
#include <stdlib.h>
using namespace std;

int main(int argc, char* argv[])
{
	int a,b;
	
	if (argc<2)
	{
		cout<<"need more params"<<endl;
		return 0;
	}
	
	else if (argc>=2)
	{
		 a = atoi(argv[1]);
		 b = atoi(argv[2]);
    int q,x,lastx,y,lasty,temp,temp1,temp2,temp3;
    if (b>a) {//we switch them
        temp=a;
        a=b;
        b=temp;
    }
    //begin function
    x=1;
    y=0;
    lastx=0;
    lasty=1;
    while (b!=0) {
        q= a/b;
        temp1= a%b;
        a=b;
        b=temp1;

        temp2 = x;
    	  x=lastx-q*x;
    	  lastx = temp2;

        temp3 = y;
    	  y = lasty-q*y;
        lasty=temp3;
    }

    cout << "gcd= "<< a << endl;
    cout << "x= " << lastx << endl;
    cout << "y= " << lasty << endl;
    return 0;
	}
}
