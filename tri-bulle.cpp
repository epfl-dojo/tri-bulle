// tri-bulle2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <vector>
#include <math.h>
#define DEBUG 0

using namespace std;

void triabulle();
int insertion();
void affichageResultat();

std::vector<int> inputs;

void main(void)
{

	while(insertion() == 0) {}
	triabulle();
	
	//Affichage
	affichageResultat();
	system("pause");
}

void triabulle()
{
	
std:vector<int> tableauTrie;
	int i = 0;
	bool changed = true;
	while (i < inputs.size() - 1 && changed)
	{
		
		changed = false;
		for (int index = 0;  index < inputs.size()-1; index++)
		{
			if (inputs[index] > inputs[index+1])
			{ 
				changed = true;
				int temp = inputs[index];
				inputs[index] = inputs[index + 1];
				inputs[index+1] = temp;
				
			}
		}
		i++;
	}
}

/* si renvoye 0, un nombre a ete chosi, si renvoye 1, lutilisateur arrete*/
int insertion() { 
	signed int input;
	cout << "Entrez un nombre entre -1023 et 1024" << endl;
	cout << "Entrez -9999 pour terminer" << endl;
	cin >> input;
	if (input == -9999)
	{
		return 1;
	}
	
	inputs.push_back(input);
	
	if (inputs.size() == 20) {
		return 1;
	}
	return 0;
}

void affichageResultat()
{
	cout << "Resultat: " << endl;
	int somme = 0;
	for (int i = 0; i < inputs.size(); i++) {
		std::cout << inputs[i] << ' ';
		somme += inputs[i];

	}
	cout << "Somme: "<< somme << endl;
}