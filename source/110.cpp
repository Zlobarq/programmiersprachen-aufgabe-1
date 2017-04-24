#include <iostream>
int teilbaraddieren()
	{
	int result=0;
	for (int x=0;x<=1000;x+=1){
		if (x%3==0 or x%5==0)
		{
		result+=x;
		}	
		}
	return result;
	}

 
int main()
{
int antwort=teilbaraddieren();
std::cout << "Antwort ist: " << antwort << ".";
    return 0;
}