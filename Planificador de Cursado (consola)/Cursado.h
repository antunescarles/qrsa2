#ifndef CURSADO_H
#define CURSADO_H

class Cursado {
private:
	estado st;
	Materia* mat;
	Anio* anio;
	bool bloqxCorrDirecta();
	
	// Esta bloqueado por correlatividad en bloque si
	// Hay alguna materia de sus cuatrimestres correlativos que NO ESTA APROBADA.
	bool bloqxCorrBloque();
public:
	enum estado{PLANIF, EN_CURSO , BLOQ, COND, LIBRE, REG, APROB};
	
	~Cursado();
	
	void iniciar();
	void pedirExtRegularidad();
	void actualizarCorrelativs();
	bool planificarCondicional();
	void planificarLibre(); // Si está BLOQUEADO, se puede cursarla como oyente. Cambia el estado a LIBRE.
};

#endif

