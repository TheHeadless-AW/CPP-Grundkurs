#pragma once

class Datum {
private:
	int tag;
	int monat;
	int jahr;
public:
	void init(int tag, int monat, int jahr);
	void init();
	void print();
};