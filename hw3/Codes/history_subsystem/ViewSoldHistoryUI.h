#include <iostream>
#include "../entities/Product.h"
#include "ViewSoldHistory.h"

using namespace std;

// 판매 완료 상품 조회 바운더리 클래스
class ViewSoldHistoryUI
{
private:
public:
    ViewSoldHistoryUI(ViewSoldHistory *cc);
    void startInterface(Product soldProudcts[]);
};
