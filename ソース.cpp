#include <stdio.h>

#include "Vector.h"
#include "CellSystem.h"

struct zikkaizu {//ジッカイズ
	Vector<CellSystem> atama;//砂糖の頭
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