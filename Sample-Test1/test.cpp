#include "pch.h"
#include "../TDD/primeFactor.cpp"
#include <vector>

using namespace std;

class PrimeFixture : public testing::Test {
public:
	PrimeFactor primeFactor;
	vector<int> expected;
	
};

TEST_F(PrimeFixture, Of1) {
	expected = {};
	EXPECT_EQ(expected, primeFactor.of(1));
}

TEST_F(PrimeFixture, Of2) {
	expected = {2};
	EXPECT_EQ(expected, primeFactor.of(2));
}

