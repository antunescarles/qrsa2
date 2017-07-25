#ifndef MNGR_H
#define MNGR_H
#include <string>
#include <vector>

class Mngr {
private:
protected:
	vector<Anio> anios;
	vector<Grupo> grupos;
public:
	
	void showPlanEstudio();
	void newGrupo(bool oblig, string nombre, int nivel);
	void newMatCuatrimestral(string matname,bool cuatri1, int gpIndx);
	void newMatAnual(string matname, int gpIndx);
	
	void newAnio(long nro_anio);
	void showAnios();
	void newCursado(int anIndx, int gpIndx, string matname);
	void iniciarCursado(int anIndx, int gpIndx, string matname);
	void planificarComoCond(int andIndx, int cursID);
	void aprobar(int andIndx, int cursID);
	
	
	~Mngr();
};

#endif

