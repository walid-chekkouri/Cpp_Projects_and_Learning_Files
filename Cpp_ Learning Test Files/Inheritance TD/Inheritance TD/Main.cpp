#include<iostream>
using namespace std;

//Ce TD est pour montrer l'héritage en c++

class Professionnel : public Abonne{

	string nomEntreprise;
	bool roaming_Actif;// si c'est faux donc inactif
	int nbHeureComm;
	bool tracking_Actif;// si c'est faux donc inactif
public:
	Professionnel(string Nom, bool roamA, int nbrH, bool track){
		nomEntreprise = Nom; roaming_Actif = roamA; nbHeureComm = nbrH; tracking_Actif = track;
	}

};


class Particulier : public Abonne{

	double rib;
	int nbHeureComm;
	bool roaming_Actif;// si c'est faux donc inactif
public:
	Particulier(double RIB, int nbrH, bool roam){
		rib = RIB; nbHeureComm = nbrH; roaming_Actif = roam;
	}

};


class Abonne : public Client{

	bool abon_Annuel;// si c'est faux donc c'est mensuel
public:
	Abonne(bool abon){
		abon_Annuel = abon;
	}
	Abonne(){}

};

class Operateur{
	string nom;
	double chiffre_Affaire;
public:
	Operateur(){}
	Operateur(string Nom, double chiffre){
		nom = Nom; chiffre_Affaire = chiffre;
	}

};

class Client{
	int numTel; 
	string cin, nom, prenom;
	Operateur op1;
public:
	Client(int tel, string Cin, string Nom, string Prenom, Operateur op){
		numTel = tel; cin = Cin; nom = Nom; prenom = Prenom; op1 = op;
	}
	Client(){}
	int getNumTel(){ return numTel; }
	string getCin(){ return cin; }
	string getNom(){ return nom; }
	string getPrenom(){ return prenom; }
	Operateur getOperateur(){ return op1; }

	void setNumTel(int tel){ numTel = tel; }
	void setCin(string CIN){ cin=CIN; }
	void setNom(string Nom){ nom=Nom; }
	void setPrenom(string Prenom){ prenom = Prenom; }
	void setOperateur(Operateur OP){ op1 = OP; }
};



int main(){

	Operateur op1("Mon Nom", 10000);
	Client c1(9859385675, "18YR098", "Mon Nom", "Mon Prenom", op1);
	Abonne a1(true);
	a1.setNom("Mon Nom");// Exemple de variable hérité
	
	Particulier par1(537, 13, false);
	Professionnel pro1("Mon Nom", true, 15, false);

	
	return 0;
}