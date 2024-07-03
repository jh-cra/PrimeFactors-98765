#include "pch.h"
#include "../TDD/primeFactor.cpp"
#include <vector>

using namespace std;

class Fixture : public testing::Test {
public:
	
};

TEST(PrimeFactors, TestName) {
	PrimeFactor primeFactor;
	vector<int> expected = {};
	EXPECT_EQ(expected, primeFactor.of(1));
}

// 한글 테스트


