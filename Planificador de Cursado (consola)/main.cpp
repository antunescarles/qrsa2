#include<iostream>
using namespace std;

int main (int argc, char *argv[]) {
	
	Mngr M;
	M.showCursados();
	M.showPlanEstudio();
	// Agregar materias al plan de estudio.
	M.newGrupo("Primer año", /*oblig=*/ true, /*nivel=*/ 1);
	M.showGrupos(); // Muestra los grupos y su indice o forma de accederlos.
	M.newMatCuatrimestral(gpIndx, "Mat Basica",1);
	M.newMatCuatrimestral(gpIndx, "Calculo I",2);
	
	
	M.newAnio(nroAnio);
	
	
	
	M.addCursado(matIndx); 
	
	
	// Elegir materia a agregar en el cursado.
	
	
	
	return 0;
}

