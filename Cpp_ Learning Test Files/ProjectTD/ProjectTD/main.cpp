#include <iostream>
#include <string>
using namespace std;

class Equipe
{
	string nom;
	int category, score;
public:
	Equipe(){}
	Equipe(string Nom, int Category, int Score)
	{
		nom = Nom; category = Category; score = Score;
	}
	string getNom(){ return nom; }
	int getScore(){ return score; }
	void setScore(int Score){ score = Score; }


};

class Joueur
{

	string nom, prenom;
	Equipe equipe_J;
	int score_J = 0;
public:
	Joueur(){}
	Joueur(string Nom, string Prenom, Equipe Equi, int Score)
	{
		nom = Nom; prenom = Prenom; equipe_J = Equi; score_J = Score;
	}
	int getScore_J(){ return score_J; }
	void setScore_J(int Score){ score_J = Score; }
	Equipe getEquipe_J(){ return equipe_J; }
	string getNom(){ return nom; }
	string getPrenom(){ return prenom; }
};

class Match
{
	Equipe equipe1;
	Equipe equipe2;
	int but1, but2;
public:
	Match(){}
	Match(Equipe Equi1, Equipe Equi2, int b1, int b2)
	{
		equipe1 = Equi1;
		equipe2 = Equi2;
		but1 = b1;
		but2 = b2;
	}
	void fin_match()
	{
		if (but1 > but2)  equipe1.setScore(equipe1.getScore() + 3);
		else if (but1 < but2) equipe2.setScore(equipe2.getScore() + 3);
		else equipe2.setScore(equipe2.getScore() + 1); equipe1.setScore(equipe1.getScore() + 1);
	}
};

class But
{

	Joueur joueur_B;
	Match match_B;
public:
	But(){}
	But(Joueur jou, Match match)
	{
		joueur_B = jou;
		match_B = match;

		joueur_B.setScore_J(joueur_B.getScore_J() + 1);
		joueur_B.getEquipe_J().setScore(joueur_B.getEquipe_J().getScore() + 1);
	}
};

int main()
{
	Equipe equipe1("Team1", 1, 5);
	Equipe equipe2("Team2", 2, 4);

	// On peut ajouter plusieurs joueurs aussi.
	Joueur Joueur1("Player1", "P1", equipe1, 2);
	Joueur Joueur2("Player2", "P2", equipe2, 1);

	Match match(equipe1, equipe2, 5, 4);

	if (equipe1.getScore() > equipe2.getScore()) cout << "L'equipe gagnante: " << equipe1.getNom() << endl;
	else if (equipe1.getScore() < equipe2.getScore()) cout << "L'equipe gagnante: " << equipe2.getNom() << endl;
	else cout << "C'est egalite " << endl;

	if (Joueur1.getScore_J() > Joueur2.getScore_J()) cout << "Meilleur joueur est: " << Joueur1.getNom() << " " << Joueur1.getPrenom() << endl;
	else if (Joueur1.getScore_J() < Joueur2.getScore_J()) cout << "Meilleur joueur est: " << Joueur2.getNom() << " " << Joueur2.getPrenom() << endl;
	else cout << "Les 2 joueurs ont le meme score" << Joueur1.getNom() << " " << Joueur1.getPrenom() << " et " << Joueur1.getNom() << " " << Joueur1.getPrenom() << endl;

	system("pause");
	return 0;
}