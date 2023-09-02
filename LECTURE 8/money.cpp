#include <iostream>
using namespace std;
int main()
{
    int total;
    cin >> total;

    int rs100, rs50, rs20, rs1;
    switch (1)
    {
    case 1:
        rs100 = total / 100;
        total = total - 100 * rs100;
        cout << "100 rupee notes are: " << rs100 << endl;

    case 2:
        rs50 = total / 50;
        total = total - 50 * rs50;
        cout << "50 rupee notes are: " << rs50 << endl;

    case 3:
        rs20 = total / 20;
        total = total - 20 * rs20;
        cout << "20 rupee notes are: " << rs20 << endl;

    case 4:
        rs1 = total / 1;
        total = total - 1 * rs1;
        cout << "1 rupee notes are: " << rs1 << endl;
    }

    return 0;
}

// other method

/*
#include <iostream>
using namespace std;

int main()
{
  int amount;
  cin>>amount;
  int Rs100 , Rs50 , Rs20 , Rs1;

  switch(1)
  {
      case 1: Rs100=amount/100;
              amount=amount%100;
              cout<<"No of 100 Rupee ="<<Rs100<<endl;
              
         
      case 2: Rs50=amount/50;
              amount=amount%50;
              cout<<"No of 50 Rupee ="<<Rs50<<endl;
              

      case 3: Rs20=amount/20;
              amount=amount%20;
              cout<<"No of 20 Rupee ="<<Rs20<<endl;
               

      case 4: Rs1=amount/1;
              amount=amount%1;
              cout<<"No of 1 Rupee ="<<Rs1<<endl; 
          
           }
        return 0;
}

*/