#include <stdio.h>

#include "Vector.h"
#include "CellSystem.h"

struct zikkaizu {//�W�b�J�C�Y
	Vector<CellSystem> atama;//�����̓�
};

zikkaizu ConstructZikkaizu(Vector<CellSystem>& V) {
	zikkaizu z;

	z.atama = V;

	return V;
}

bool Free(zikkaizu& In) {
	Free(In.atama);

	return true;
}