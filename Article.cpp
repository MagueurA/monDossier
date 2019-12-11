#include <iostream>
#include <string>
#include "Article.h"

using namespace std;


Article :: Article(std::string titre , double prix){
		this->titre=titre;
		this->prix=prix;
}

std::string Article::getTitre() const{
	return this->titre ;
}

double Article::getPrix() const{
	return this->prix ;
}

void Article::setTitre(std::string newtitre) {
	titre = newtitre ;
}

void Article::setPrix(double newprix) {
	prix = newprix ;
}


