#ifndef CUATRI_H
#define CUATRI_H

class Cuatri {
private:
	int nro;
	vector<Cuatri*> correlativPrev;
	vector<Cuatri*> correlativPost;
	vector<Materia> mats;
	
public:
	~Cuatri();
	void createMateria(string matname);
	
};

#endif

