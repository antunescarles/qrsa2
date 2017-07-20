#ifndef MATERIA_H
#define MATERIA_H
#include <string>
#include <set>
#include <list>

class Materia {
private:
	
	bool addCorrelatividadPost(Materia &m); //Usada por la materia agregada con addCorrelatividadPrev().
	
protected:
	string nom;
	set<Materia*> correlativasPost;
	set<Materia*> correlativasPrev;
	vector<Cursado> cursados;
public:
	~Materia();
	
	bool addCorrelatividadPrev(Materia &m); //Agreg. mat previa correlativa con ésta. Retorna verdadero si no estaba ya.
	void createCursado(Anio *a);
	
	
};

#endif

class MatCuatrimestral : public Materia
{
private:
	Cuatri cuatri;
public:
	MatCuatrimestral(string nombre, Cuatri &c);
};
