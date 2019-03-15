#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;


//exercice 1


//typedef unsigned long long Ulong;

//class Duree
//{
//private:
//    Ulong myDuree;
//    int mySeconds;
//    int myMinutes;
//    int myHours;
//    int myDays;
//    void normaliser();

//public:
//    Ulong getDuree();
//    void display();
//    void incr(Ulong delta);
//    void decr(Ulong delta);
//    Duree (const Ulong  Seconds);
//};

//Duree::Duree (const Ulong  Seconds)
//{
//    myDuree = Seconds;
//    normaliser();
//}

//void Duree::normaliser ()
//{
//    myDays = myDuree/86400;
//    myHours = (myDuree%86400)/(3600);
//    myMinutes = (myDuree%3600)/60;
//    mySeconds = (myDuree%60);
//}

//void Duree::display()
//{
//    cout << myDays << " jour(s)  " << myHours << " heure(s) "
//         << myMinutes << " minute(s)" << mySeconds << " seconde(s)  ";
//}

//Ulong Duree::getDuree()
//{
//    return myDuree;
//}

//void Duree::incr(Ulong delta)
//{
//    myDuree+=delta;
//    normaliser();
//}

//void Duree::decr(Ulong delta)
//{
//    if (delta >= myDuree)myDuree=0;
//    myDuree-=delta;
//    normaliser();
//}

//void testDureeDeBase()
//{

//    Duree d1 (0);
//    d1.incr (1);
//    cout << "Nbre sec. " << setw (6) << d1.getDuree ()
//         << ", soit : ";
//    d1.display ();
//    cout << '\n';

//    d1.decr (1);
//    cout << "Nbre sec. " << setw (6) << d1.getDuree ()
//         << ", soit : ";
//    d1.display ();
//    cout << '\n';

//    d1.incr (3662);
//    cout << "Nbre sec. " << setw (6) << d1.getDuree ()
//         << ", soit : ";
//    d1.display ();
//    cout << '\n';

//    d1.decr (10000);
//    cout << "Nbre sec. " << setw (6) << d1.getDuree ()
//         << ", soit : ";
//    d1.display ();
//    cout << '\n';
//    //seconde = new Duree(18000);
//    int x;
//    while (true)
//    {
//        cin >> x;
//        Duree obj(x);
//        obj.display();
//    }
//}

//int main()
//{
//    testDureeDeBase();
//    return 0;
//}


//exercice 2

class Module;
class Prof
{
private:
    string myName;
    vector <Module*> TabM;
public:
    void display();
    void addModule(Module * module);
    string getName();
    void setName(string & name);
    Prof (string Name);
};

class Module
{
private:
    string myName;
    vector <Prof*> TabP;
public:
    void display();
    void addProf(Prof * prof);
    string getName();
    void setName(string & name);
    Module (string Name);
};

Prof::Prof (string Name)
{
    myName=Name;
}

Module::Module (string Name)
{
    myName=Name;
}

void Prof::addModule (Module * module)
{
    TabM.push_back(module);
}

void Module::addProf(Prof * prof)
{
    TabP.push_back(prof);
}

void Prof::display()
{
    for (unsigned i(0); i < TabM.size(); ++i)
    {
        cout << TabM[i] << endl;
    }
}

void Module::display()
{
    for (unsigned i(0); i < TabP.size(); ++i)
    {
        cout << TabP[i] << endl;
    }
}

void TestModuleProf()
{
    vector <Module*> TabM(5);
    vector <Prof*> TabP(5);
    string nomprof;
    string nommodule;


    unsigned i (0);
    while (i<4)
    {
        cin >> nomprof;
        cin >> nommodule;
        TabP[i] = new Prof(nomprof);
        TabM[i] = new Module(nommodule);
        Module.addProf(TabP);
        .addModule(objM);
    }

}

int main()
{

    return 0;
}


























