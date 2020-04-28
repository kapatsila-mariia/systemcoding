#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct date
{ char time[6];
int call; };
class Human
{
    char name[30];
    char lastname [30];
    char surname [30];
    char address [30];
    int number [12];
    date t;

public:
    Human ();
    char * getaddress ();
    int getnumber ();
    void show ();
    };

Human  Human ()
{ cout << "Input name:"; cin >> name;
cout << "Input date of born \n";
cout << "Day.mon:"; cin >> t.daymon;
cout << "Year:"; cin >> t.year;
cout << "Input adr:"; cin >> adr;
cout << "Input fac:"; cin >> fac;
cout << "Input kurs:"; cin >> kurs;
}





        int main()
{
    printf("Hello World!\n");
    return 0;
}


Student :: Student ()
{ cout << "Input name:"; cin >> name;
cout << "Input date of born \n";
cout << "Day.mon:"; cin >> t.daymon;
cout << "Year:"; cin >> t.year;
cout << "Input adr:"; cin >> adr;
cout << "Input fac:"; cin >> fac;
cout << "Input kurs:"; cin >> kurs;
}

void Student :: show ()
{
cout << "Name:" << name << endl;
cout << "Was born:" << t.daymon << '.' << t.year << endl;
cout << "Address:" << adr << endl;
cout << "Fac:" << fac << endl;
cout << "Kurs:" << kurs << endl;
}

char * Student :: getfac () {return fac; }
int Student :: getkurs () {return kurs; }
void spisfac (Student spis [], int n) // ñïèñîê ñòóäåíò³â çàäàíîãî ôàêóëüòåòàòà
{ char fac [20];
cout << "Input faculty:";
cin >> fac;
for (int i = 0; i <n; i ++)
if (strcmp (spis [i] .getfac (), fac) == 0) spis [i] .show ();
}

void spisfackurs (Student spis [], int n)
// ñïèñîê ñòóäåíò³â çàäàíèõ ôàêóëüòåòó ³ êóðñó
{ int i, k;
char fac [20];
cout << "Input faculty:"; cin >> fac;
cout << "Input the course:"; cin >> k;
for (i = 0; i <n; i ++)
if ((strcmp (spis [i] .getfac (), fac) == 0) && (spis [i] .getkurs () == k))
spis [i] .show ();
}

// ========= main ================
int main()
{Student * spis;
int n;
cout << "Input a number of students:"; cin >> n;
spis = new Student [n];
for (int i = 0; i <n; i ++) {
cout << "==============================" << endl;
spis [i] .show ();
}
spisfac (spis, n);
spisfackurs (spis, n);
delete [] spis;
cout << "press any key!";
while (!kbhit());

}


