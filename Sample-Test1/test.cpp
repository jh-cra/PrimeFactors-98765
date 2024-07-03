#include "pch.h"
#include "../TDD/primeFactor.cpp"
#include <vector>

using namespace std;

class Fixture : public testing::Test {
public:
	
};

TEST(PrimeFactors, Of1) {
	PrimeFactor primeFactor;
	vector<int> expected = {};
	EXPECT_EQ(expected, primeFactor.of(1));
}

TEST(PrimeFactors, Of2) {
	PrimeFactor primeFactor;
	vector<int> expected = {2};
	EXPECT_EQ(expected, primeFactor.of(2));
}

