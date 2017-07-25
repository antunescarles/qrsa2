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
	/** Mostrar los cursados */
	M.addCursado(anIndx, "Calculo I");
	
	// Quiero cambiar el estado de las materias.
	// Veo los cursados y elijo.
	M.planificarComoCond(anIndx, "Calculo I");
	
	// Poner en estado EN CURSO solo a las materias planificadas del cuatri correspond y las anuales.
	M.iniciarCursado(andIndx, /*cuatri=*/1); 
	
	M.aprobar(anIndx, "Calculo I");
	
	
	
	return 0;
}

