#include <iostream>
using namespace std;

class shop
{
    int item[100];
    int itemprice[100];
    int count;

public:
    void init(void) { count = 1; }

    void setter(void);
    void display(void);
};

void shop::setter(void)
{
    cout << "Enter item and its price" << endl;
    cin >> item[count] >> itemprice[count];
    count++;
}
void shop::display(void)
{
    for (int i = 1; i < count; i++)
    {
        cout << "The item is " << item[i] << "and its price is " << itemprice[i] << endl;
    }
}

int main()
{
    shop sharmaji;
    sharmaji.init();
    for (int i = 0; i < 3; i++)
    {
        sharmaji.setter();
    }

    sharmaji.display();

    shop vermaji;
    vermaji.init();
    for (int j = 0; j < 3; j++)
    {
        vermaji.setter();
    }
    vermaji.display();

    return 0;
}
