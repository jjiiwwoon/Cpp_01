#include "Ram.h"
#include <iostream>
using namespace std;

Ram::Ram() {
	size = 100 * 1024;
	for (int i = 0; i < 100 * 1024; i++) {
		mem[i] = 0;
	}
}
Ram::~Ram() {
	cout << "�޸� ���ŵ�";
}
char Ram::read(int address) {
	return mem[address];
}
void Ram::write(int address, char value) {
	size = value;
	mem[address] = size;
}