/*
 * WC.h
 *
 *  Created on: Sep 9, 2017
 *      Author: moon
 */

#ifndef WC_H_
#define WC_H_
#include <string>

class WC {
public:
	WC();
	virtual ~WC();
private:
	std::string fileName;
public:
	/**
	 * @function:Setting value of fileName
	 */
	void setFileName(std::string fileName);
	/**
	 * @function:Counting the number of character
	 * @return:If success,return the number of character,else return -1
	 */
	int computingChar(void);
	/**
	 * @function:Counting the number of word
	 * @return:If success,return the number of word,else return -1
	 */
	int computingWord(void);
	/**
	 * @function:Counting the number of line
	 * @return:If success,return the number of line,else return -1
	 */
	int computingLine(void);
};

#endif /* WC_H_ */
