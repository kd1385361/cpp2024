#include "car.h"

int main()
{
	Car kuruma;//Carクラスからkurumaインスタンスを生成
	kuruma.speed = 40;//kurumaのメンバ変数へ代入
	kuruma.drive(1.5);//kurumaのメンバ関数を実行
	return 0;
}