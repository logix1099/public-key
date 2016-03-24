#include <math.h>
#include <iostream>
#include <stdlib.h>
using namespace std;

int main(int argc, char* argv[])
{
	
	if (argc<3)
	{
		cout<<"need more params"<<endl;
		return 0;
	}
	
	else if (argc=3)
	{
		double a = atoi(argv[1]);
		double b = atoi(argv[2]);
		int n = atoi(argv[3]);
		int modexp = (int)pow(a, b);
		modexp = modexp %n;
		cout<<"modexp = "<<modexp<<endl;
	}
}
