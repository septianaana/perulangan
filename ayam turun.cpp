#include <iostream>
using namespace std;
class LaguAyam
{
 private:
     int n;
 public:
    void tampil()
    {
        cout<<"anak ayam turun 5"<<endl;
        for (int n=5;n>0;n--)
    {
        if(n>1)
            {
                cout<<"anak Ayam turun"<<n<<",Mati Satu Tinggal"<<n-1<<endl;
            }
                else if (n=1)
                {
                    cout<<"Anak Ayam turun 1, Mati Satu Tinggal Induknya"<<endl;
                }
        }








        }

};

int main()
{
    LaguAyam a;
    a.tampil();
    return 0;
}
