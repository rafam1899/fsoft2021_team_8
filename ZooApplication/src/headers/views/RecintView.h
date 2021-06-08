/*
 * RecintView.h
 *
 *  Created on: 08/06/2021
 *      Author: Tiago Oliveira
 */

#ifndef HEADERS_VIEWS_RECINTVIEW_H_
#define HEADERS_VIEWS_RECINTVIEW_H_
#include <list>
#include "../model/Recint.h"

class RecintView {

public:
	Recint getRecint();
	void printRecint(Recint *recint);
	void printRecints(list<Recint>& recints);
};



#endif /* HEADERS_VIEWS_RECINTVIEW_H_ */
