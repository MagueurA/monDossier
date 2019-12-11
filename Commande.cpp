#include <iostream>
#include <iomanip>

using namespace std;

#include "Commande.h"

Commande::Commande(std::string reference,std::string date){
	this->reference=reference;
	this->date=date;
}

std::string Commande::getReference() const{
	return reference;
}

void Commande::setReference(std::string newreference){
	reference=newreference;
}

std::string Commande::getDate()const{
	return date;
}

void Commande::setDate(std::string newdate){
	date=newdate;
}

Ligne Commande::getLigne(int numero) const{
	return liste[numero];
}

void Commande::setLigne(const Ligne &l){
	liste.push_back(l);
}

double Commande::getTotal() {
	
	double total;
	for(unsigned i = 0; i < liste.size(); i++)
	{
		total = total + liste[i].getMontant();	
	}
	
	return total; 
}

void Commande::afficher(){
	
   cout << setfill('-') << setw(80) << "\n";
   cout << setfill(' ') << setw(3) << "Qte"; 
   cout << "|" << setfill(' ') << setw(50) << "Description"; 
   cout << "|" << setfill(' ') << setw(8) << "Prix uni"; 
   cout << "|" << setfill(' ') << setw(15) << "Total\n";
   cout << setfill('-') << setw(80) << "\n";
   
   for(unsigned i = 0; i < liste.size(); i++)
   {
		liste[i].afficher();
		cout << endl;
   }
   
   cout << setfill('-') << setw(80) << "\n";
   cout << setfill(' ') << setw(1) << "Le " << getDate() << ",";
   cout << setfill(' ') << setw(59) << getTotal() << " euros" << endl;
   cout << setfill('-') << setw(80) << "\n";
   
}


