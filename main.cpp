/* #include <iostream>
#include <string>
using namespace std;

int main ()
{
   // cout << "hello world!" << endl;
   //cout << "je fais un test en c++" << endl;
  // cout << " \" " << endl;
  // cout << "\\" << endl;
  int ageUtilisateur(16);
  cout << ageUtilisateur << endl;
  char lettre('a');
  cout << lettre << endl;
  bool estAmi(true);
  cout << estAmi << endl;
  string nomUtilisateur("Albert Einstein");
    cout << nomUtilisateur << endl;
    string& maVariabe(nomUtilisateur);
    cout << maVariabe << endl;
    return 0 ;
}*/
#include <iostream>

/*using namespace std;
int main()
{
    int ageUtilisateur(0);
    double pi(3.14);
    cin >> ageUtilisateur;
    cout << "age est : " << ageUtilisateur <<endl;
    cout << pi << endl;
    return 0;
}*/
/*#include <iostream>
#include <cmath>

using namespace std;
int main()
{
   // int a(-5),b(3);
    //cout << a << endl;
   // a=b;
    //cout << a << endl;
   // int resultat;
   // resultat= abs(a)+ b;
   // cout << resultat << endl;
   int a,b;
   cout << "Bienvenue dans la calculatrice"<< endl;
   cout << "donnez la valeur de a : ";
   cin >> a;
   cout << "donnez la valeur de b : ";
   cin >> b;
   int resultat= pow(a,b);
   cout << a << "^" << b << " est egale " << resultat << endl;
    return 0;
}*/
/*#include <iostream>
using namespace std;
int main ()
{
    int nombreEnfants(0);
    cin >> nombreEnfants;
    if(nombreEnfants==0)
    {
        cout << "vous n avez pas d enfants " << endl;
    }
    else if (nombreEnfants==1)
    {
        cout << "vous avez un seul enfant" << endl;

    }
    else if ((nombreEnfants>1) and (nombreEnfants<=4))
    {
        cout << "quel beaux enfants" << endl;
    }
    else
        {
            cout << "vous avez beaucoups d enfants" << endl;

    }
    return 0;
}
*/
/*#include <iostream>
using namespace std;
int ajouteDeux(int nombre)
{
    int resultatCalcul(nombre+2);
    return resultatCalcul;
}
int main ()
{ int a(0), b(0);
cout << " Entrez la valeur de a ";
cin >> a;
b = ajouteDeux(a);
cout << a << " + 2 = " << b << endl;
return 0 ;

}*/
/*#include <iostream>
#include <string>
using namespace std;
string personne[10];
int main()
{
    int i(0);
    for(i=0;i<=9;i++)
    {
        personne[i]="Emna";
        cout << personne[i] << endl;

} return 0;
}
*/
/*#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main ()
{
    //vector<int> tableau(5);
    vector<string> listeNom(10,"EMNA");
    for(int i(0); i<10; i++)
    {
         cout << listeNom[0] << endl;
    }

    return 0;
}*/
#include <iostream>
#include "math.h"
using namespace std;
int main()
{
    int a,b(0);
    cin >> a;
    b = ajouteDeux(a);
    cout << b;
    return 0;}
