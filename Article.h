#ifndef ARTICLE_H
#define ARTICLE_H
#include <string>

class Article



{
   private:
      std::string titre;
      double prix;

   public:
      Article(std::string titre="poupou", double prix=0.);

      std::string getTitre() const;
      double getPrix() const;
      void setTitre(std::string newtitre);
      void setPrix(double newprix);
};

#endif //ARTICLE_H
