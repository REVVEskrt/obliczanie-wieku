#include <iostream>

using namespace std;

float wiek;
float obliczanie(float wiek)
{
    float x;
    x=2021-wiek;
    return x;
}

int main()
{
    cout << "wprowadz wiek osoby: ";
    cin >> wiek;
    cout <<"osoba urodzila sie w: " <<obliczanie(wiek) << endl;

    return 0;
}
