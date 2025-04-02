//#include "Add.h"
//
//Add::Add(functions* op1, functions* op2) : op1(op1), op2(op2) {}
//
//SquareMatrix Add::apply(const SquareMatrix& mat) const {
//    SquareMatrix result1 = op1->apply(mat);
//    SquareMatrix result2 = op2->apply(mat);
//
//    SquareMatrix sum(result1.getSize(), std::vector<int>(result1.getSize()));
//
//    for (size_t i = 0; i < result1.getSize(); ++i) {
//        for (size_t j = 0; j < result1.getSize(); ++j) {
//            sum[i][j] = result1[i][j] + result2[i][j];
//        }
//    }
//
//    return sum;
//}