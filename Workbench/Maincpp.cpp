#include <HighscoreManager.h>
#define TOP 5

void main() {
	HighscoreManager* HSM = new HighscoreManager(TOP);
	// Se agregan scores
	HSM->AddScore("jorge", 1000);
	HSM->AddScore("ramiro", 4000);
	HSM->AddScore("CarlOs", 666);
	// Se muestran scores
	HSM->ShowScores();
	// Se remueve a ramiro
	cout << "Se remueve a Ramiro" << endl;
	HSM->RemoveScore("ramiro");
	HSM->ShowScores();
	// Se busca el score en posicion 1
	cout << "Se obtiene el score en la posicion 1" << endl;
	cout << "Nombre en posicion 1: " << HSM->GetScore(1)->GetName() << " y su score es: " << HSM->GetScore(1)->GetScore() << endl;
	delete HSM;
	cin.get();
}