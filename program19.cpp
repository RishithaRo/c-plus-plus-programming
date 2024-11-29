#include<iostream>
using namespace std;
//Macros
/* When ever you define a variable using macro,
The variables does not get stored in the memory location.
It is an object file.
Before compilation it self, where ever you use that macro (variable),
it gets replaced by its value.
*/
#define Age 22
#define pi 3.14
int main()
{
	cout<<Age;
	cout<<pi;
	return 0;
}
