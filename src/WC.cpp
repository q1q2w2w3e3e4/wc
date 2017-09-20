/*
 * WC.cpp
 *
 *  Created on: Sep 9, 2017
 *      Author: moon
 */

#include "WC.h"
#include <fstream>
using namespace std;

WC::WC() {
}

WC::~WC() {
}

void WC::setFileName(string fileName) {
	this->fileName = fileName;
}

int WC::computingChar(void) {
	std::ifstream in(fileName);
	if (!in.is_open())
		return 0;

	in.seekg(0, std::ios_base::end);
	std::streampos sp = in.tellg();
	in.close();
	return sp;
}

int WC::computingLine(void) {
	ifstream in;
	int num = 0;
	string str;

	in.open(fileName);
	while (getline(in, str)) {
		num++;
	}
	in.close();
	return num;
}

int WC::computingWord(void) {
	int num = 0;
	char c;
	char priorC;
	ifstream in;

	in.open(fileName);
	in.get(c);
	priorC = ' ';
	while (!in.eof()) {
		if (c >= 'a' && c <= 'z') {
			if (priorC == ' ' || priorC == '\n' || priorC == '.'
					|| priorC == ',' || priorC == ':' || priorC == '?'
					|| priorC == '!') {
				num++;
			}
		}

		priorC = c;
		in.get(c);
	}
	in.close();
	return num;
}
