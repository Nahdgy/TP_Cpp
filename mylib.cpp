#include <iostream>
#include <string>
#include <vector>
#include "mylib.hpp"
#include "algorithm"

//exercice 0
int abs(int x)
{
    return x < 0 ? -x : x;
}

//exercice 2
bool paire(int n)
{
    return n%2 == 0;
}

//exercice 3
void afficherligne()
{  
    std::cout << "**********" << std::endl;
}

void afficherligne(char c, int nbchar)
{  
    for(int i = 0; i < nbchar; i++)
    {
        std::cout << c;
    }
    std::cout << std::endl;
}

//exercice 5
bool bissextile(int years)
{
    return ((years % 4) == 0 && (years % 100) !=0) || (years % 400) == 0 ;
}

//exercice 6

int mul(int x, int y)
{
    if (x == 0 || y == 0) {
        return 0;
    }
 
    if (x == y) {
        return x;
    }
 
    if (x == y) {
        return y;
    }
 
    return x + mul(x, y - 1);
}

int multiply(int x, int y)
{
    int i = y; y = 0;
    int m = mul(x, abs(y));
    return (y < 0) ? -m : m;
}

int multiplyCorrect(int x, int y)
{
    int i = y;
    int prod;

       //même chose que !x || !y
    if(x == 0 || y == 0)
    {
        return 0;
    }
    
    while (i == 0 && i >=0)
    {
        prod += x;
        i--;
    }   
    return prod;
}

//exercie 7
int divide(int x, int y)
{
    if (y == 0)
    {
        std::cout << "N'est pas par 0";
        exit(-1);
    }
 
    int sign = 1;

    if (x * y < 0) 
    {
        sign = -1;
    }
 
    x = abs(x), y = abs(y);

    int quotient = 0;
 
    while (x >= y)
    {
        x = x - y;      
        quotient++;     
    }
    std::cout << "Le reste de la division est : " << x << std::endl;
    return sign * quotient;
}

//exercice 8
int sommeDesNb(int a)
{
   int cpt = 0;
   int somme = 0;
	//Initialisation a ne pas oublier!!!
	do
    {
		std::cout << "Entrer un entier (0 pour terminer): ";
		std::cin >> a;
        somme = somme + a;
        cpt++ -1;
	}
    while(a != 0);
	
    
	std::cout << "Somme des valeurs: " << somme << std::endl;
    std::cout << "Tu as saisie : " << cpt << " fois " << std::endl;
    return somme;
}

int lesDiviseurs(int nb)
{
    int i;
    for (i=1 ; i<=nb ; i++)
        {
            if ((nb%i)==0)
            
            std::cout << i << std::endl;
        }
    return 0;
}

void print(int i)
{
    std::cout << i << " : ";
}

void DiviseursPopresCorrection()
{
    int n = 0;

    std::vector<int> diviseurs;
    std::cout << "Veuillez saisir un nombre : ";
    std::cin >> n;

    for(int i = 1; i <= (n/2); i ++)
    {
        if (n % i == 0)
        {
            diviseurs.push_back(i);
        }
    }

    // si l& liste est vide
    if(diviseurs.empty())
    {
        std::cout << "le nombre" << n
        << " n'a pas de diviseurs propres." << std::endl;
    }
    else{
        std::cout << " voici la liste des diviseurs propres de "
        <<n << " : " <<std::endl;
        std:: for_each(diviseurs.begin(), diviseurs.end(), print);
        std::cout << std::endl;
    }
}

int nombreParfait()
{
    int somme=0,nbr ,i;

    std::cin >> nbr;
  
  for(i = 1; i < nbr; ++i){
    if(nbr % i == 0)
    {
      somme = somme + i;
    }
  }
  if(somme == nbr)
  {
    std::cout << " est un nombre parfait";
  }  
  else
  {
    std::cout << " n'est pas un nombre parfait";
  }
  return 0;
}
int minAndMax(int max, int min)
{
    int nb[10]; 
    int i;
    int gdNombre = 10000;
    int ptNombre = 0;

     for (i = 0; i < 10; i++)
    {
        std::cout << "Entrez votre numéro position "<< i + 1 <<" : ";
        std::cin >> nb[i];
    }


    for(i=0; i<10; i++)
    {
        if(gdNombre >= nb[i])
        {
            gdNombre = nb[i];
        }
        else
        {
        continue;       
        }
      
    }  
    std::cout << "Le nombre MIN est : "<< gdNombre;

     for(i=0; i<10; i++)
    {
        if(ptNombre <= nb[i])
        {
            ptNombre = nb[i];
        }
        else
        {
        continue;       
        }
    }
    std::cout << " et le nombre MAX est : "<< ptNombre; 
}


void TP1_exo0()
{
    int i = 0;

    std::cout << "Veuillez entrer un nombre entier stp frr : ";
    std::cin >> i;
    std::cout << "Le nombre absolue de " << i << " est : " << abs(i) << std::endl;
}

void TP1_exo1()
{
std::string name, surname;
int age = 0;

    std::cout << "Saississez votre Nom : ";
    std::cin >> name;
    std::cout << "Saississez votre prénom : ";
    std::cin >> surname;
    std::cout << "Saisis ton âge : ";
    std::cin >> age;

    std::cout << "Bonjour " << surname << " " << name << " !"<< std::endl;

    if(age < 18)
    {
        std::cout << "Vous êtes encore mineur !" << std::endl;
    }
    else if (age >= 18 && age < 35)
    {
        std::cout <<"Vous êtes jeune adulte !" << std::endl;
    }
    else if (age >= 35 && age < 64)
    {
        std::cout << "Toujours pas le retraite mais proche de la mort" << std::endl;
    }
    else{
        std::cout << "T'es edward cullen ou un nokia 3310" << std::endl;
    }
}
    
void TP1_exo2()
{
    int n = 0;

    std::cout << "Veuillez entrer un nombre entier: ";
    std::cin >> n;
    if (paire(n))
    {
        std::cout <<"Votre nombre " << n << " est paire ! ";
    }
    else {
        std::cout <<"Votre nombre " << n << " est impaire ! ";
    }
}

void TP1_exo3()
{
    int nblignes = 0;

    std::cout << "Veuillez entrer le nombre de lignes à afficher: ";
    std::cin >> nblignes;
    for(int i = 0; i < nblignes; i++)
    {
        afficherligne(); 
    }
}

void TP1_exo3_1()
{
    int nblignes = 0;
    char character = '*';
    int nbchar = 0;

    std::cout << "Veuillez entrer le nombre de lignes à afficher: ";
    std::cin >> nblignes;
    std::cout << "Veuillez entrer le caractères que vous voulez: ";
    std::cin >> character;
    std::cout << "Veuillez entrer le nombre de caractères à afficher: ";
    std::cin >> nbchar;
        for(int i = 0; i < nblignes; i++)
    {
        afficherligne(character, nbchar); 
    }
    std::cout << std::endl;
}

void TP1_exo4()
{
    int d = 0;
    int e = 0;

    std::cout << "Veuillez entrer un premier nombre entier: ";
    std::cin >> d;
    std::cout << "Veuillez entrer un deuxième nombre entier: ";
    std::cin >> e;
    std::cout << d << e ;
    std::cout << " Devient ";
    std::cout << e << d << std::endl;
}

void TP1_exo5()
{
    int year = 0;

    std::cout << "Veuillez entrer une année: ";
    std::cin >> year;
    if(bissextile(year))
    {
        std::cout << "c'est une année bissextile" << std::endl;
    }
    else 
    {
        std::cout << "Ce n'est pas une année bissextile" << std::endl;
    }
}

void TP1_exo6()
{
    int x = 0;
    int y = 0;

    std::cout << "Veuillez entrer un premier nombre entier: ";
    std::cin >> x;
    std::cout << "Veuillez entrer un multiplicateur: ";
    std::cin >> y;
    std::cout << "Le résultat de la multiplication de " << x << " par " << y << " est " << multiply(x, y) << std::endl;
}

void TP1_exo7()
{
    int x = 0;
    int y = 0;

    std::cout << "Veuillez entrer un premier nombre entier: ";
    std::cin >> x;
    std::cout << "Veuillez entrer un deuxième nombre entier: ";
    std::cin >> y;
    std::cout << divide(x, y) << std::endl;
}

void TP1_exo8()
{
    int nb = 0;

        sommeDesNb(nb);   
}

void TP1_exo9()
{
    int nb = 0;

    std::cout << "Entrez un nombre entier : ";
    std::cin >> nb;
    std::cout << lesDiviseurs(nb) << std::endl;
}

void TP1_exo10()
{
    int nb = 0;

    std::cout << "Entrez un nombre entier : ";
    std::cin >> nb;
    std::cout << nombreParfait(nb) << std::endl;
}

void TP2_exo1()
{
    int max, min;
    std::cout << minAndMax(max, min) << std::endl;
}

void TP2_exo2()
{
    std::cout << CopyTab() << std::endl;
}

int CopyTab()
{
    int t1[10],t2[10];
    int i;

    for (i = 0; i < 10; i++)
    { 
        std::cout << "Entrez votre nombres entier positfs ou négatifs n° "<< i + 1 << " : ";
        std::cin >> t1[i];
    }
    for (i = 0; i < sizeof (t1[i]); i++)
    {
        if(t1[i] > 0)
        {
            t2[i] = t1[i];
        }
        else if (t1[i] <= 0)
        {
            t2[i] = 0;
        }
    }
    std::cout << " Voici la copie positive du tableau t1 : "<< t2[i];
    return t2[i];
}

void TP2_exo3()
{

}
float TabSomme(float tab[])
{
    int i;
    float somme;
    tab[10] = {7.4f,12.4f,9.4f,4.3f,34.5f,64.3f,98.4f,23.5f,13.5f,35.2f};

    for (i = 0; i < 10; i++)
    {
        somme = somme + i;
    }

    std::cout <<"La somme des nombres flotant est : " << somme;
    return somme;
}




