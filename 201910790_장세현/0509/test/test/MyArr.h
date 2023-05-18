class MyArr {
private:
	void* base[10];
	int max;
	int size;
public:
	MyArr();
public:
	int get_size() const { return size; };

public:
	bool push_back(void* value);
	bool erase(int idx);
	void* get(int idx);


};