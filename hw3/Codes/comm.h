#include <iostream>
#include <string>
using namespace std;

#define INPUT_FILE_NAME "input.txt"
#define OUTPUT_FILE_NAME "output.txt"

#define WHOLE_MEM_NUM 100
#define WHOLE_PRODUCT_NUM 1000
#define WHOLE_ORDER_NUM 1000

#ifndef WHOLE_NUM
#define WHOLE_NUM
static int wholeMemberNum;
static int wholeProductNum;
static int wholeOrderNum;
static int searchPoint;
static int wholeMemIndex;
#endif

float calAvgPurchaseEvaluation(string, string);