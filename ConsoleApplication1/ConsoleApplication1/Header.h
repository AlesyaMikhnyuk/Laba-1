class  Vector
{
	bool *Vect;
	int size;
public:
	Vector(); // конструктор без параметров
	Vector(int); 
	~Vector(); //деструктор
	int GetSize();
	bool GetVect(int index);
	void SetSize(int size_);
	void SetVect(int index, bool value);
	void print();
	void kon(Vector v2);
	void des(Vector v2);
	void not();
	unsigned int one();
	unsigned int zero();
	bool is(Vector v2);
};
