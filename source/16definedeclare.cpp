int func(); // declare funktion

int main() //define funktion
{
    int x = func();
}

int func() 
{
    return 2; //define funktion,funktion ergibt 2
}

class MyClass; //define class
//////////
extern int x; //declare x ohne es zu definieren,es ist in einem anderen Ort definiert.
int func()
{
    x = 3; //hier ist x definieret
}

int x; //hier ist x definieret.

//Declarieren gibt den typ und name des attributes
//Definition ergibt die wert von Variables, was eine Funktion genau macht, die Methoden eines Classes.