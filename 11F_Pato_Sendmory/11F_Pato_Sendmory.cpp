#include <iostream>
#include <vector>

using namespace std;

bool Jo(int i, vector<int>& SENDMORY)
{
	if (SENDMORY[0] == 0 || SENDMORY[4] == 0) // 0-ával nem kezdõdhet szám!
		return false;


	// ide egy csomó "if (...) return false;"-t még ki lehet találni

	if (i==7 && 0 == 1000 * SENDMORY[0] 
			+ 91 * SENDMORY[1] 
			- 90 * SENDMORY[2] 
			+ SENDMORY[3] 
			- 9000 * SENDMORY[4] 
			- 900 * SENDMORY[5] 
			+ 10 * SENDMORY[6] 
			- SENDMORY[7])
		return true;

	return false;
}

void Kiir(vector<int>& SENDMORY)
{
	cerr << "SENDMORY: ";
	for (auto& valasztas : SENDMORY)
	{
		cerr << valasztas;
	}
	cerr << endl;
}

void Kiir2(vector<int>& SENDMORY)
{
	cout << "SEND + MORE = MONEY ----> "
		<< SENDMORY[0] << SENDMORY[1] << SENDMORY[2] << SENDMORY[3]
		<< " + " << SENDMORY[4] << SENDMORY[5] << SENDMORY[6] << SENDMORY[1]
		<< " = " << SENDMORY[4] << SENDMORY[5] << SENDMORY[2] << SENDMORY[1] << SENDMORY[7]
		<< endl;
}



int main()
{
    vector<int> SENDMORY(8, -1);

	// SENDMORY = [-1, -1, -1, -1, -1, -1, -1, -1]

    int i = 0;
	while (-1 < i && i < 8)
	{
		SENDMORY[i]++;
		bool jo = Jo(i, SENDMORY);
		if (SENDMORY[i] < 10)
		{
			i++;
		}
		else
		{
			SENDMORY[i] = -1;
			i--;
		}

		if (jo)
		{
			Kiir(SENDMORY);
			Kiir2(SENDMORY);
		}
	}

	Kiir(SENDMORY);
	Kiir2(SENDMORY);






}
