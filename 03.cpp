#include <iostream>
#include <string>
using namespace std;

class binary
{
private:
    string s;
    void chk_bin(void);

public:
    void read(void);
    void ones(void);
    void display(void);
};

void binary ::read(void)
{
    
    cout << "Enter String:";
    cin >> s;
}

void binary ::chk_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] != '0' && s[i] != '1')
        {
            cout << "string is not binary" << endl;
            exit(0);
        }
    }
}

void binary ::ones(void)
{
    chk_bin();
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '0')
        {
            s[i] = '1';
        }
        else
        {
            s[i] = '0';
        }
    }
}

void binary ::display(void)
{
    cout<<"Displaying your binary number"<<endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout << s[i];
    }
}

int main()
{
    binary b;
    b.read();
    // b.chk_bin();
    b.ones();
    b.display();

    return 0;
}