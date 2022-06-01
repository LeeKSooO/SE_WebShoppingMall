#include <iostream>
#include "../comm.h"
#include "../entities/Product.h"
#include "../entities/Member.h"
#include "ViewSoldHistory.h"
#include "ViewSoldHistoryUI.h"
using namespace std;

ViewSoldHistory::ViewSoldHistory(Member *member)
{
    // product collection에 호출
    ProductCollection *p = member->getProductCollection();
    Product **soldProductList = p->getSoldProducts();
    int num = p->getNumSoldProducts();

    ViewSoldHistoryUI *ui = new ViewSoldHistoryUI();

    ui->printTitle();

    if (num > 0)
        for (int i = 0; i < num; i++)
        {
            ui->printLine(soldProductList[i]);
        }

    ui->printEndl();
}

// void ViewSoldHistoryUI::startInterface(Product *soldProudcts)
// {
//     FILE *in_fp = fopen(INPUT_FILE_NAME, "r+");
//     FILE *out_fp = fopen(OUTPUT_FILE_NAME, "w+");

//     fprintf(out_fp, "3.3. 판매 완료 상품 조회\n");
//     // 상품명 제작회사명 가격 판매된수량 평균구매만족도
//     for (int i = 0; i < sizeof(soldProudcts) / sizeof(Product); i++)
//     {
//         fprintf(out_fp, "> %s %s %d %d %f\n", soldProudcts[i].getProductName(), soldProudcts[i].getCompanyName(), soldProudcts[i].getPrice(), soldProudcts[i].getSalesNum(), soldProudcts[i].getAvgPurchaseEvaluation());
//     }

//     return;
// }
